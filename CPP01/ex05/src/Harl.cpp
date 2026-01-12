/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 14:02:48 by roversch          #+#    #+#             */
/*   Updated: 2026/01/12 12:20:58 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}
Harl::~Harl(void) {}

int	Harl::findlevel(std::string level)
{
	static const std::string levels[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			return (i + 1);
	}	
	return (0);
}

void	Harl::complain(std::string level)
{
	int	lvl = findlevel(level);
	void (Harl::*funcs[5])(void) =
	{
		&Harl::unknown,
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};

	(this->*funcs[lvl])();
}

void	Harl::unknown(void)
{
	std::cout << "Unknown Message" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "This is a Debug message" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "This is an Info message" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "This is a Warning message" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is an Error message" << std::endl;
}