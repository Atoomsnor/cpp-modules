/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 13:42:26 by roversch          #+#    #+#             */
/*   Updated: 2026/02/16 13:43:12 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& rhs)
{
	std::cout << "ScalarConverter copy constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter&& rhs) noexcept
{
	std::cout << "ScalarConverter move constructor called" << std::endl;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& rhs)
{
	std::cout << "ScalarConverter copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	return (*this);
}

ScalarConverter&	ScalarConverter::operator=(ScalarConverter&& rhs) noexcept
{
	std::cout << "ScalarConverter move assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	return (*this);
}



ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter default destructor called" << std::endl;
}
