/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 16:36:18 by roversch          #+#    #+#             */
/*   Updated: 2026/03/09 16:05:41 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	std::cout << PURPLE << "--base constructor--" << std::endl;
	try
	{
		Array<int>	a(5);
		std::cout << "size: " << a.size() << " | elements: ";
		for (size_t i = 0; i < a.size(); i++)
			a[i] = i + 1;

		for (size_t i = 0; i < a.size(); i++)
			std::cout << a[i] << " ";
		std::cout << "\n";
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << GREEN << "--copy constructor--" << std::endl;
	try
	{
		Array<int>	a(5);
		for (size_t i = 0; i < a.size(); i++)
			a[i] = i + 1;

		Array<int>	b(a); // cals copy constructor
		std::cout << "size: " << b.size() << " | elements: ";
		for (size_t i = 0; i < b.size(); i++)
			std::cout << b[i] << " ";
		std::cout << "\n";
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << PINK << "--assignment operator--" << std::endl;
	try
	{
		Array<int>	a(5);
		for (size_t i = 0; i < a.size(); i++)
			a[i] = i + 1;

		Array<int>	c;
		c = a; // calls copy assignment constructor
		std::cout << "size: " << c.size() << " | elements: ";
		for (size_t i = 0; i < c.size(); i++)
			std::cout << c[i] << " ";
		std::cout << "\n";
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << BLUE << "--out of bounds--" << std::endl;
	try
	{
		Array<int>	c(5);
		std::cout << c[5] << std::endl;
		std::cout << RESET;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << RESET << "--subject tests--" << std::endl;
	#define MAX_VAL 42000

	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;
	return 0;
}