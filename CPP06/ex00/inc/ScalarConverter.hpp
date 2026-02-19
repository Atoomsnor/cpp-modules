/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 13:27:59 by roversch          #+#    #+#             */
/*   Updated: 2026/02/19 13:48:07 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#define	MAX_INT	2147483647.0
#define	MIN_INT	-2147483649.0
#define PURPLE	"\033[0;34m"
#define GREEN	"\033[0;32m"
#define PINK	"\033[0;35m"
#define RESET	"\033[0m"

enum	e_type
{
	eChar,
	eInt,
	eFloat,
	eDouble,
	eUnknown,
};

class ScalarConverter
{
	private:
		// Prevent instantiation / Rule of 0
		ScalarConverter() = delete;

		// Member functions
		static e_type	findType(std::string value);

		static bool		isChar(std::string value);
		static bool		isInt(std::string value);
		static bool		isFloat(std::string value);
		static bool		isDouble(std::string value);

		static void		convertChar(char value);
		static void		convertInt(int value);
		static void		convertFloat(float value);
		static void		convertDouble(double value);

	public:
		// Member function
		static void	convert(std::string value);
};
