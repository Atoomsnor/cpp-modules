/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 16:36:18 by roversch          #+#    #+#             */
/*   Updated: 2026/02/24 19:05:05 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	try
	{
		std::cout << PURPLE << "--base constructor--" << std::endl;
		Array<int>	a(5);
		std::cout << "size: " << a.size() << " | elements: ";
		for (size_t i = 0; i < a.size(); i++)
			a[i] = i + 1;
		for (size_t i = 0; i < a.size(); i++)
			std::cout << a[i] << " ";
		std::cout << "\n";

		std::cout << GREEN << "--copy constructor--" << std::endl;
		Array<int>	b(a);
		std::cout << "size: " << b.size() << " | elements: ";
		for (size_t i = 0; i < b.size(); i++)
			std::cout << b[i] << " ";
		std::cout << "\n";

		std::cout << PINK << "--assignment operator--" << std::endl;
		Array<int>	c;
		c = b;
		std::cout << "size: " << c.size() << " | elements: ";
		for (size_t i = 0; i < c.size(); i++)
			std::cout << c[i] << " ";
		std::cout << "\n";

		std::cout << BLUE << "--out of bounds--" << std::endl;
		std::cout << c[5] << std::endl;
		std::cout << RESET;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}