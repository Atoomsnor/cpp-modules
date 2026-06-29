/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 07:51:52 by roversch          #+#    #+#             */
/*   Updated: 2026/06/29 10:25:49 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <stdexcept>
		// std::map<std::string, float>	csvDB;


BitcoinExchange::BitcoinExchange()
{
	loadCsvDB("../data.csv");
}


void	BitcoinExchange::loadCsvDB(const std::string& filename)
{
	std::ifstream file(filename);

	std::string line;
	std::getline(file, line);

	while (std::getline(file, line))
	{
		std::string date = line.substr(0, line.find(','));
		std::string value = line.substr(line.find(',') + 1);
		csvDB[date] = std::stof(value);
	}
}

float	BitcoinExchange::getRate(const std::string& date) const
{
	std::map<std::string, float>::const_iterator it = csvDB.upper_bound(date);
	
	if (it == csvDB.begin())
		throw std::runtime_error("date too early");
	--it;
	return (it->second);
}









BitcoinExchange::BitcoinExchange(const BitcoinExchange& rhs)
{
	(void)rhs;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& rhs)
{
	(void)rhs;
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
}