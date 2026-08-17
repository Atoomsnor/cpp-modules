#include "PmergeMe.hpp"
#include <iostream>
#include <iomanip>
#include <chrono>

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cerr << "Error" << std::endl;
		return (1);
	}

	if (PmergeMe(argc, argv) == -1)
		return (1);
	
	return (0);
}