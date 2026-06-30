/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 07:51:52 by roversch          #+#    #+#             */
/*   Updated: 2026/06/30 13:25:24 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <stdexcept>
#include <iostream>
#include <fstream>


BitcoinExchange::BitcoinExchange(const std::string& filename)
{
	databaseToMap(filename);
}

void	BitcoinExchange::databaseToMap(const std::string& filename)
{
	std::ifstream file(filename); //erorcheck if it opened/exists

	std::string line;
	std::getline(file, line);

	while (std::getline(file, line))
	{
		std::string date = line.substr(0, line.find(','));
		std::string rate = line.substr(line.find(',') + 1);
		csvDB[date] = std::stof(rate);
	}
}

bool	BitcoinExchange::getAmount(const std::string& line, std::string& date, float& amount) const
{
	std::size_t pipe = line.find('|');
	if (pipe == std::string::npos)
		return (false);
	date = line.substr(0, pipe);
	date = date.substr(0, date.find_last_not_of(" \t") + 1);
	amount = std::stof(line.substr(pipe + 1));
	return (true);
}

float	BitcoinExchange::getRate(const std::string& date) const
{
	std::map<std::string, float>::const_iterator it = csvDB.upper_bound(date);

	if (it == csvDB.begin())
		throw std::runtime_error("date too early");
	--it;
	return (it->second);
}

void	BitcoinExchange::processInput(const std::string& filename) const
{
	std::ifstream	file(filename);
	std::string		line;

	std::getline(file, line);

	while (std::getline(file, line))
	{
		std::string	date;
		float		amount;

		if (getAmount(line, date, amount) == false)
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}

		if (amount < 0)
		{
			std::cerr << "Error: not a positive number." << std::endl;
			continue;
		}

		if (amount > 1000)
		{
			std::cerr << "Error: too large a number." << std::endl;
			continue;
		}

		try
		{
			float rate = getRate(date);
			std::cout << date << " => " << amount << " = " << amount * rate << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
}
