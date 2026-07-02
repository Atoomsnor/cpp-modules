/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 08:16:09 by roversch          #+#    #+#             */
/*   Updated: 2026/07/02 10:56:07 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Incorrect amount of arguments" << std::endl;
		return (1);
	}

	try
	{
		BitcoinExchange	btc("data.csv");
		btc.parseInput(argv[1]);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return (1);
	}
	
	return (0);
}