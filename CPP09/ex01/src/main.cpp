#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		error_and_exit();

	try {
		calculateRPN(argv[1]);
	}
	catch (const std::exception& e)
	{
		error_and_exit();
	}
}