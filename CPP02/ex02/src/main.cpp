/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:13:38 by roversch          #+#    #+#             */
/*   Updated: 2026/01/12 17:36:33 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a(10);
	Fixed b(20);
	Fixed c(10);

	std::cout << "Comparisons:" << std::endl;
	std::cout << "a > b  : " << (a > b) << std::endl;
	std::cout << "a < b  : " << (a < b) << std::endl;
	std::cout << "a >= c : " << (a >= c) << std::endl;
	std::cout << "a <= c : " << (a <= c) << std::endl;
	std::cout << "a == c : " << (a == c) << std::endl;
	std::cout << "a != b : " << (a != b) << std::endl;

	std::cout << "Arithmetic:" << std::endl;
	Fixed sum = a + b;
	Fixed diff = b - a;
	Fixed time = a * b;
	Fixed div = b / a;

	std::cout << "a + b = " << sum << std::endl;
	std::cout << "b - a = " << diff << std::endl;
	std::cout << "a * b = " << time << std::endl;
	std::cout << "b / a = " << div << std::endl;

	std::cout << "Increment/Decrement:" << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << "Min/Max:" << std::endl;
	Fixed const consta( Fixed( 5.05f ) * Fixed( 4 ) );
	Fixed const constb( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << Fixed::min( consta, constb ) << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::max( consta, constb ) << std::endl;

	std::cout << "Subject tests:" << std::endl;
	Fixed suba;
	Fixed const subb( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << suba << std::endl;
	std::cout << ++suba << std::endl;
	std::cout << suba << std::endl;
	std::cout << suba++ << std::endl;
	std::cout << suba << std::endl;
	std::cout << subb << std::endl;
	std::cout << Fixed::max( suba, subb ) << std::endl;
	return 0;
}