/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 13:27:09 by roversch          #+#    #+#             */
/*   Updated: 2026/02/19 20:24:35 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Incorrect amount of arguments" << std::endl;
		return (1);
	}
	if (static_cast<std::string>(argv[1]) == "test")
	{
		std::cout << PURPLE << "Subject tests:" << std::endl;
		ScalarConverter::convert("0");
		ScalarConverter::convert("nan");
		ScalarConverter::convert("42.0f");
		std::cout << GREEN << "My tests:" << std::endl;
		ScalarConverter::convert("'c'");
		ScalarConverter::convert("123");
		ScalarConverter::convert("123.0");
		ScalarConverter::convert("123.0f");
		ScalarConverter::convert(" ");
		ScalarConverter::convert("\t");
		ScalarConverter::convert("2147483648"); // max int
		ScalarConverter::convert("2147483648.0"); // max int float
	}
	else
		ScalarConverter::convert(argv[1]);
}