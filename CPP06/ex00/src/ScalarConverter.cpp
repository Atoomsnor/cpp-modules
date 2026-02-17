/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 13:42:26 by roversch          #+#    #+#             */
/*   Updated: 2026/02/17 16:43:04 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>
#include <regex>
#include <iomanip>
#include <cmath>

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& rhs)
{
	std::cout << "ScalarConverter copy constructor called" << std::endl;
	(void)rhs;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& rhs)
{
	std::cout << "ScalarConverter copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter default destructor called" << std::endl;
}

bool	ScalarConverter::isChar(std::string value)
{
	std::regex charRegex("^['].[']$");

	if (std::regex_match(value, charRegex) == true)
		return (true);
	return (false);
}

bool	ScalarConverter::isInt(std::string value)
{
	std::regex	intRegex("^[+-]?[0-9]+$");

	if (std::regex_match(value, intRegex) == true)
		return (true);
	return (false);
}

bool	ScalarConverter::isFloat(std::string value)
{
	std::regex	floatRegex("^[+-]?[0-9]*+[.][0-9]+[f]$");

	if (std::regex_match(value, floatRegex) == true || value == "-inff"
			|| value == "+inff" || value == "nanf")
		return (true);
	return (false);
}

bool	ScalarConverter::isDouble(std::string value)
{
	std::regex	doubleRegex("^[+-]?[0-9]*+[.][0-9]+$");

	if (std::regex_match(value, doubleRegex) == true || value == "-inf"
			|| value == "+inf" || value == "nan")
		return (true);
	return (false);
}

e_type	ScalarConverter::setType(std::string value)
{
	if (isChar(value))
		return (eChar);
	if (isInt(value))
		return (eInt);
	if (isFloat(value))
		return (eFloat);
	if (isDouble(value))
		return (eDouble);
	return (eUnknown);
}

void	ScalarConverter::convertChar(char value)
{
	if (std::isprint(value))
		std::cout << "char: '" << value << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(value) << std::endl;
	std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << std::endl;
}

void	ScalarConverter::convertInt(int value)
{
	if ((value >= 0 && value <= 127) && std::isprint(static_cast<char>(value)))
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << value << std::endl;
	std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << std::endl;
}

void	ScalarConverter::convertFloat(float value)
{
	if (std::isfinite(value) == false)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << value << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(value) << std::endl;
	}
	else
	{
		if ((value >= 0.0 && value <= 127.0) && std::isprint(static_cast<char>(value)))
			std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		if (value > -2147483648.0 && value < 2147483647.0)
			std::cout << "int: " << static_cast<int>(value) << std::endl;
		else
			std::cout << "int: Non displayable" << std::endl;
		std::cout << "float: " << value << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(value) << std::endl;
	}
}

void	ScalarConverter::convertDouble(double value)
{
	if (std::isfinite(value) == false)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
		std::cout << "double: " << value << std::endl;
	}
	else
	{
		if ((value >= 0.0 && value <= 127.0) && std::isprint(static_cast<char>(value)))
			std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		if (value > -2147483648.0 && value < 2147483647.0)
			std::cout << "int: " << static_cast<int>(value) << std::endl;
		else
			std::cout << "int: Non displayable" << std::endl;
		std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
		std::cout << "double: " << value << std::endl;
	}
}

void	ScalarConverter::convert(std::string value)
{
	e_type	type = setType(value);

	std::cout << std::setprecision(1) << std::fixed;
	try
	{
		switch (type)
		{
			case	eChar:
				std::cout << "char type" << std::endl;
				convertChar(value[1]);
				break;
			case	eInt:
				std::cout << "int type" << std::endl;
				convertInt(std::stoi(value));
				break;
			case	eFloat:
				std::cout << "float type" << std::endl;
				convertFloat(std::stof(value));
				break;
			case	eDouble:
				std::cout << "double type" << std::endl;
				convertDouble(std::stod(value));
				break;
			case	eUnknown:
				std::cout << "invalid type" << std::endl;
				break;
		}
	}
	catch(const	std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}