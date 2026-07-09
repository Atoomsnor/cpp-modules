/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 07:51:55 by roversch          #+#    #+#             */
/*   Updated: 2026/07/06 18:22:35 by roversch         ###   ########.fr       */
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
		BitcoinExchange();
		BitcoinExchange(const std::string& filename);

		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange&	operator=(const BitcoinExchange& other);
		~BitcoinExchange();

		bool	validateInput(const std::string& line, std::string& date, float& amount) const;
		void	excecute(const std::string& filename) const;
		float	getRate(const std::string& date) const;
};
