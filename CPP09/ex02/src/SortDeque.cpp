#include "PmergeMe.hpp"
#include <algorithm>

static size_t	computeJacobsthalBoundary(size_t groupIndex)
{
	size_t previous = 1;
	size_t current = 1;
	while (groupIndex-- > 1)
	{
		size_t next = current + 2 * previous;
		previous = current;
		current = next;
	}
	return (current);
}

static void	splitIntoWinnersAndLosers(const std::deque<int> &list,
									std::deque<int> &winners,
									std::deque<int> &losers)
{
	for (size_t i = 0; i + 1 < list.size(); i += 2)
	{
		if (list[i] > list[i + 1])
		{
			winners.push_back(list[i]);
			losers.push_back(list[i + 1]);
		}
		else
		{
			winners.push_back(list[i + 1]);
			losers.push_back(list[i]);
		}
	}
}

static std::deque<int>	realignLosersWithSortedWinners(const std::deque<int> &winners,
													const std::deque<int> &losers,
													const std::deque<int> &sortedWinners)
{
	std::deque<int> realignedLosers;
	std::deque<bool> used(winners.size(), false);

	for (size_t i = 0; i < sortedWinners.size(); i++)
	{
		for (size_t j = 0; j < winners.size(); j++)
		{
			if (!used[j] && winners[j] == sortedWinners[i])
			{
				realignedLosers.push_back(losers[j]);
				used[j] = true;
				break;
			}
		}
	}
	return (realignedLosers);
}

/* Steps 3+4: start the chain as b1 + all winners (already sorted, b1 is free),
* then insert group k = losers[t(k-1)..t(k)-1], walked backwards, with the
* binary search capped at 2^k - 1 elements. When `hasUnpairedLast` is set, the
* LAST loser is the leftover element: it has no partner in the chain, so no
* cap applies and it searches everything present at that moment. */
static std::deque<int>	insertLosersInJacobsthalOrder(const std::deque<int> &sortedWinners,
													const std::deque<int> &losers,
													bool hasUnpairedLast)
{
	std::deque<int> chain;
	chain.push_back(losers[0]);
	chain.insert(chain.end(), sortedWinners.begin(), sortedWinners.end());

	for (size_t k = 2; computeJacobsthalBoundary(k - 1) < losers.size(); k++)
	{
		size_t groupEnd = std::min(computeJacobsthalBoundary(k), losers.size());
		for (size_t i = groupEnd; i > computeJacobsthalBoundary(k - 1); i--)
		{
			size_t searchLimit = std::min(((size_t)1 << k) - 1, chain.size());
			if (hasUnpairedLast && i == losers.size())
				searchLimit = chain.size();
			chain.insert(std::upper_bound(chain.begin(), chain.begin() + searchLimit, losers[i - 1]), losers[i - 1]);
		}
	}
	return (chain);
}

static std::deque<int>	sortWithMergeInsertionRecursive(const std::deque<int> &list)
{
	if (list.size() <= 1)
		return list;

	std::deque<int> winners;
	std::deque<int> losers;
	splitIntoWinnersAndLosers(list, winners, losers);
	bool hasUnpairedLast = (list.size() % 2 == 1);

	std::deque<int> sortedWinners = sortWithMergeInsertionRecursive(winners);
	losers = realignLosersWithSortedWinners(winners, losers, sortedWinners);
	if (hasUnpairedLast)
		losers.push_back(list.back());

	return (insertLosersInJacobsthalOrder(sortedWinners, losers, hasUnpairedLast));
}

void	sortDequeWithFordJohnson(std::deque<int> &deq)
{
	deq = sortWithMergeInsertionRecursive(deq);
}