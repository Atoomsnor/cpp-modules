/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 13:27:09 by roversch          #+#    #+#             */
/*   Updated: 2026/02/17 16:41:50 by roversch         ###   ########.fr       */
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
		
	}
	ScalarConverter::convert(argv[1]);
}