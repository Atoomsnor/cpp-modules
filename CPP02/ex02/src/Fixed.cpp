/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:13:32 by roversch          #+#    #+#             */
/*   Updated: 2026/01/15 17:11:31 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : rawBits(value * (1 << fractionalBits))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : rawBits(std::roundf(value * (1 << fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : rawBits(other.rawBits)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->rawBits = rhs.rawBits;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
	// std::cout << "setRawBits member function called" << std::endl;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->rawBits) / (1 << this->fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (static_cast<int>(this->rawBits) / (1 << this->fractionalBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	if (this->rawBits > rhs.rawBits)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	if (this->rawBits < rhs.rawBits)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	if (this->rawBits >= rhs.rawBits)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	if (this->rawBits <= rhs.rawBits)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	if (this->rawBits == rhs.rawBits)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	if (this->rawBits != rhs.rawBits)
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	Fixed	result(toFloat() + rhs.toFloat());
	return (result);
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	Fixed	result(toFloat() - rhs.toFloat());
	return (result);
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	Fixed	result(toFloat() * rhs.toFloat());
	return (result);
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	Fixed	result(toFloat() / rhs.toFloat());
	return (result);
}

Fixed&	Fixed::operator++(void)
{
	this->rawBits++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	result = *this;
	++rawBits;
	return (result);
}

Fixed&	Fixed::operator--(void)
{
	this->rawBits--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	result = *this;
	--rawBits;
	return (result);
}

Fixed&	Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

const Fixed&	Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

Fixed&	Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

const Fixed&	Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	return (os << obj.toFloat());
}