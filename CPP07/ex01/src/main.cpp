/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 11:51:28 by roversch          #+#    #+#             */
/*   Updated: 2026/02/24 16:34:42 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <iostream>

int main(void)
{
	int			int_arr[5] = {1, 2, 3, 4, 5};
	const int	const_int_arr[5] = {1, 2, 3, 4, 5};
	char		char_arr[6] = "hello";
	double		double_arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

	std::cout << PURPLE << "--int print and increment--" << std::endl;
	::iter(int_arr, 5, print<int>);
	::iter(int_arr, 5, increment<int>);
	std::cout << "\n";
	::iter(int_arr, 5, print<int>);

	std::cout << GREEN << "--const int print--" << std::endl;
	::iter(const_int_arr, 5, print<const int>);

	std::cout << PINK << "--char print and increment--" << std::endl;
	::iter(char_arr, 5, print<char>);
	::iter(char_arr, 5, increment<char>);
	std::cout << "\n";
	::iter(char_arr, 5, print<char>);

	std::cout << BLUE << "--double print and increment--" << std::endl;
	::iter(double_arr, 5, print<double>);
	::iter(double_arr, 5, increment<double>);
	std::cout << "\n";
	::iter(double_arr, 5, print<double>);
}