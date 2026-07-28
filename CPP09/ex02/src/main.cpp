#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cerr << "Error" << std::endl;
		return (1);
	}

	std::vector<int>	vectorContainer;
	std::deque<int>		dequeContainer;

	if (parseToCountainer(argc, argv, vectorContainer) == -1)
		return (-1);
	if (parseToCountainer(argc, argv, dequeContainer) == -1)
		return (-1);
}