#include "PmergeMe.hpp"
#include <algorithm> // std::upper_bound

void formPairs(std::vector<int> &list, std::vector<int> &winners, std::vector<int> &losers)
{
	size_t n = list.size();
	for (size_t i = 0; i + 1 < n; i += 2)
	{
		int a = list[i];
		int b = list[i + 1];
		if (a > b)
		{
			winners.push_back(a);
			losers.push_back(b);
		}
		else
		{
			winners.push_back(b);
			losers.push_back(a);
		}
	}
	if (n % 2 == 1)
		losers.push_back(list.back());
}

std::vector<int> insertion(std::vector<int> &winners, std::vector<int> &losers)
{
	std::vector<int> result = winners;

	for (size_t i = 0; i < losers.size(); i++)
	{
		std::vector<int>::iterator pos = std::upper_bound(result.begin(), result.end(), losers[i]);
		result.insert(pos, losers[i]);
	}
	return result;
}

std::vector<int> sortRecursive(std::vector<int> list)
{
	if (list.size() <= 1)
		return list;

	std::vector<int> winners;
	std::vector<int> losers;
	formPairs(list, winners, losers);

	std::vector<int> sortedWinners = sortRecursive(winners);

	return insertion(sortedWinners, losers);
}

void runVector(std::vector<int> &vecContainer)
{
	vecContainer = sortRecursive(vecContainer);
}