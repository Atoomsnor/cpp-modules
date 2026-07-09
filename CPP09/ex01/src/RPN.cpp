#include "RPN.hpp"
#include <sstream>
#include <stack>
#include <iostream>

static bool	is_nbr(std::string &token)
{
	if (std::stoi(token) >= 0 && std::stoi(token) <= 9)
		return (true);
	return (false);
}

static bool	is_operator(std::string &token)
{
	if (token == "+" || token == "-" || token == "*" || token == "/")
		return (true);
	return (false);
}

void	error_and_exit()
{
	std::cerr << "Error" << std::endl;
	exit (1);
}

void	calculateRPN(const std::string &input)
{
	std::stack<int> stack;
	std::istringstream iss(input);
	std::string token;

	while (iss >> token)
	{
		int outcome = 0;
		if (is_operator(token) == true)
		{
			int	rhs = stack.top();
			stack.pop();
			int	lhs = stack.top();
			stack.pop();

			if (token == "+")
				outcome = lhs + rhs;
			else if (token == "-")
				outcome = lhs - rhs;
			else if (token == "*")
				outcome = lhs * rhs;
			else if (token == "/")
			{
				if (rhs == 0)
					error_and_exit();
				outcome = lhs / rhs;
			}
			stack.push(outcome);
		}
		else if (is_nbr(token))
			stack.push(std::stoi(token));
		else
			error_and_exit();
	}

	if (stack.size() == 1)
		std::cout << stack.top() << std::endl;
	else
		error_and_exit();
}