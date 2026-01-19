/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:33:56 by roversch          #+#    #+#             */
/*   Updated: 2026/01/15 18:41:28 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &rhs)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = rhs;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat sounds" << std::endl;
}