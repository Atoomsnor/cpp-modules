/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 07:51:52 by roversch          #+#    #+#             */
/*   Updated: 2026/07/06 18:22:04 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <stdexcept>
#include <iostream>
#include <fstream>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const std::string& filename)
{
	databaseToMap(filename);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& rhs) : csvDB(rhs.csvDB) {}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& rhs)
{
	if (this != &rhs)
		this->csvDB = rhs.csvDB;
	return (*this);
}

void	BitcoinExchange::databaseToMap(const std::string& filename)
{
	std::ifstream file(filename);
	if (!file.is_open())
		throw std::runtime_error("could not open file");

	std::string line;
	std::getline(file, line);

	while (std::getline(file, line))
	{
		std::string date = line.substr(0, line.find(','));
		std::string rate = line.substr(line.find(',') + 1);
		csvDB[date] = std::stof(rate);
	}
}

static bool	isValidDate(std::string& date)
{
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		return(false);

	int	year, month, day;

	try { // stoi catch
		year = std::stoi(date.substr(0, date.find('-')));
		month = std::stoi(date.substr(date.find('-') + 1));
		day = std::stoi(date.substr(date.rfind('-') + 1));
	} catch (...) { return (false); }

	if (year < 2008 || year > 2026)
		return (false);
	if (month < 1 || month > 12)
		return (false);
	if (day < 1 || day > 31)
		return (false);
	
	int	daysInMonth;
	if (month == 2)
	{
		bool leapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
		daysInMonth = leapYear ? 29 : 28;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		daysInMonth = 30;
	else
		daysInMonth = 31;
	if (day > daysInMonth)
		return (false);

	std::cout << "date: " << date << " year: " << year << " month: " << month << " day: " << day << std::endl;
	return (true);
}

bool	BitcoinExchange::validateInput(const std::string& line, std::string& date, float& value) const
{
	std::size_t pipe = line.find('|');
	if (pipe == std::string::npos)
		return (false);

	date = line.substr(0, pipe);
	std::size_t	start = date.find_first_not_of(" \t"); // trim whitespaces before/after
	std::size_t end = date.find_last_not_of(" \t");
	if (start == std::string::npos)
		return (false);
	date = date.substr(start, end - start + 1);

	if (isValidDate(date) == false)
		return (false);

	std::string valueStr = line.substr(pipe + 1);
	start = valueStr.find_first_not_of(" \t"); // trim whitespace before
	if (start == std::string::npos)
		return (false);

	try { // stof catch
		value = std::stof(valueStr.substr(start)); // trims whitespaces after
	} catch (...) { return (false); }
	return (true);
}

float	BitcoinExchange::getRate(const std::string& date) const
{
	std::map<std::string, float>::const_iterator it = csvDB.upper_bound(date); // upper_bound for equal or earlier date

	if (it == csvDB.begin())
		throw std::runtime_error("Date too early");
	--it;
	return (it->second);
}

void	BitcoinExchange::excecute(const std::string& filename) const
{
	std::ifstream	file(filename);
	if (!file.is_open())
		throw std::runtime_error("Could not open file");
	std::string		line;

	std::getline(file, line);

	while (std::getline(file, line)) // Main loop
	{
		std::string	date;
		float		value;

		if (validateInput(line, date, value) == false)
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}

		if (value < 0)
		{
			std::cerr << "Error: not a positive number." << std::endl;
			continue;
		}

		if (value > 1000)
		{
			std::cerr << "Error: too large a number." << std::endl;
			continue;
		}

		try
		{
			float rate = getRate(date); 
			std::cout << date << " => " << value << " = " << value * rate << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
}

BitcoinExchange::~BitcoinExchange() {}