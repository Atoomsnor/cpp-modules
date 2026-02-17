/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 13:42:26 by roversch          #+#    #+#             */
/*   Updated: 2026/02/17 12:08:19 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>
#include <regex>
#include <iomanip>
// #include <limits>

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

// bool	ScalarConverter::isChar(std::string value)
// {
// 	std::regex charRegex("^")
// }

bool	ScalarConverter::isInt(std::string value)
{
	std::regex	intRegex("^[+-]?[0-9]+$");
	if (std::regex_match(value, intRegex) == true)
		return (true);
	return (false);
}

// bool	ScalarConverter::isFloat(std::string value)
// {
// 	std::regex	floatRegex();
// }

//find the funny type
e_type	ScalarConverter::setType(std::string value)
{
	// if (isChar(value))
	// 	return (eChar);
	if (isInt(value))
		return (eInt);
	// if (isFloat(value))
	// 	return (eFloat);
	// if (isDouble(value))
	// 	return (eDouble);
	return (eUnknown);
}

void	ScalarConverter::convertChar(char value)
{
	if (std::isprint(value))
		std::cout << "char: " << value << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(value) << std::endl;
	std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << std::endl;
}

void	ScalarConverter::convertInt(int value)
{
	if ((value >= 0 && value <= 127) && std::isprint(static_cast<char>(value)))
		std::cout << "char: " << static_cast<char>(value) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << value << std::endl;
	std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << std::endl;
}

// void	ScalarConverter::convertFloat(float value)
// {
// 	if (std::isprint(value))
// 		std::cout << "char: " << value << std::endl;
// 	else
// 		std::cout << "char: Non displayable" << std::endl;
// 	std::cout << "int: " << static_cast<int>(value) << std::endl;
// 	std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
// 	std::cout << "double: " << static_cast<double>(value) << std::endl;
// }

void	ScalarConverter::convertDouble(double value)
{
	if ((value >= 0 && value <= 127) && std::isprint(static_cast<char>(value)))
		std::cout << "char: " << static_cast<char>(value) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << value << std::endl;
	std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << value << std::endl;
}

void	ScalarConverter::convert(std::string value)
{
	e_type	type = setType(value);
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << type << std::endl;

	switch (type) //prob put in try-block
	{
		case	eChar:
			std::cout << "char type" << std::endl;
			convertChar(*(value.begin())); //yoinked this from matthijs
			break;
		// case	eInt:
		// 	std::cout << "int type" << std::endl;
		// 	convertInt(std::stoi(value));
		// 	break;
		// case	eFloat:
		// 	std::cout << "float type" << std::endl;
		// 	convertFloat(std::stof(value));
		// 	break;
		case	eInt:
			std::cout << "double type" << std::endl;
			convertDouble(std::stod(value));
			break;
		default:
			std::cout << "invalid type" << std::endl;
			break;
	}
}