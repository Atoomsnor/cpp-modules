/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 07:51:55 by roversch          #+#    #+#             */
/*   Updated: 2026/07/02 10:58:49 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <string>

class	BitcoinExchange
{
	private:
		std::map<std::string, float>	csvDB;

		void	databaseToMap(const std::string& filename);

	public:
		BitcoinExchange(const std::string& filename);

		bool	validateInput(const std::string& line, std::string& date, float& amount) const;
		float	getRate(const std::string& date) const;
		void	parseInput(const std::string& filename) const;
};	