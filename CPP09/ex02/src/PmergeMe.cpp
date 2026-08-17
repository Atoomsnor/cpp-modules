#include "PmergeMe.hpp"
#include <iostream>
#include <iomanip>
#include <chrono>

int	PmergeMe(int argc, char **argv)
{
	std::vector<int>	displayContainer;
	if (parseToCountainer(argc, argv, displayContainer) == -1)
		return (-1);
	printContainer("Before:  ", displayContainer);

	auto				vectorStart = std::chrono::steady_clock::now();
	std::vector<int>	vectorContainer;
	if (parseToCountainer(argc, argv, vectorContainer) == -1)
		return (-1);
	sortVectorWithFordJohnson(vectorContainer);
	std::chrono::duration<double, std::micro> vectorElapsed =
		std::chrono::steady_clock::now() - vectorStart;

	auto				dequeStart = std::chrono::steady_clock::now();
	std::deque<int>		dequeContainer;
	if (parseToCountainer(argc, argv, dequeContainer) == -1)
		return (-1);
	sortDequeWithFordJohnson(dequeContainer);
	std::chrono::duration<double, std::micro> dequeElapsed =
		std::chrono::steady_clock::now() - dequeStart;

	printContainer("After:   ", vectorContainer);

	std::cout << std::fixed << std::setprecision(5);
	std::cout << "Time to process a range of " << vectorContainer.size()
			  << " elements with std::vector : " << vectorElapsed.count() << " us" << std::endl;
	std::cout << "Time to process a range of " << dequeContainer.size()
			  << " elements with std::deque  : " << dequeElapsed.count() << " us" << std::endl;
	return (0);
}