/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 08:16:09 by roversch          #+#    #+#             */
/*   Updated: 2026/06/29 10:25:07 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 2)
		return (1);
	try
	{
		BitcoinExchange	btc;
		
		// Test various dates
		std::cout << "Testing BitcoinExchange rates:\n" << std::endl;
		
		std::cout << "Rate on 2011-01-03: " << btc.getRate("2011-01-03") << std::endl;
		std::cout << "Rate on 2011-01-05: " << btc.getRate("2011-01-05") << std::endl;
		std::cout << "Rate on 2012-01-04: " << btc.getRate("2012-01-04") << std::endl;
		std::cout << "Rate on 2013-02-01: " << btc.getRate("2013-02-01") << std::endl;
		std::cout << "Rate on 2020-01-01: " << btc.getRate("2020-01-01") << std::endl;
		std::cout << "Rate on 2021-06-15: " << btc.getRate("2021-06-15") << std::endl;
		
		// Test edge case - date earlier than database
		std::cout << "\nTesting date earlier than database:" << std::endl;
		try
		{
			std::cout << "Rate on 2010-01-01: " << btc.getRate("2010-01-01") << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
		return (1);
	}
	
	return (0);
}