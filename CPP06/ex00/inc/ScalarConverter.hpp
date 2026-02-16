/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 13:27:59 by roversch          #+#    #+#             */
/*   Updated: 2026/02/16 17:35:47 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

enum	e_type
{
	eChar,
	eInt,
	eFloat,
	eDouble,
	eUnknown,
};

class	ScalarConverter
{
	private:
		//Member functions
		static e_type	setType(std::string value);

		static bool		isChar(std::string value);
		static bool		isInt(std::string value);
		static bool		isFloat(std::string value);
		static bool		isDouble(std::string value);

		static void		convertChar(char value);
		static void		convertint(int value);
		static void		convertFloat(float value);
		static void		convertDouble(double value);

	public:
		//Constructor(s)
		ScalarConverter();

		//Rule of 3
		ScalarConverter(const ScalarConverter& rhs);
		ScalarConverter&	operator=(const ScalarConverter& rhs);
		virtual ~ScalarConverter() = 0;

		//Member functions
		static void	convert(std::string value);
};