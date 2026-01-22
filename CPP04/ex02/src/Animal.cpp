/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:13:41 by roversch          #+#    #+#             */
/*   Updated: 2026/01/15 18:08:54 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal init constructor called" << std::endl;
}

Animal::Animal(const Animal &rhs)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = rhs;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal &rhs)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Animal sounds" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}