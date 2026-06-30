/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 07:51:55 by roversch          #+#    #+#             */
/*   Updated: 2026/06/30 13:25:30 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <string>

class	BitcoinExchange
{
	private:
		std::map<std::string, float>	csvDB;

	public:
		BitcoinExchange(const std::string& filename);

		void	databaseToMap(const std::string& filename);
		bool	getAmount(const std::string& line, std::string& date, float& amount) const;
		float	getRate(const std::string& date) const;
		void	processInput(const std::string& filename) const;
};	