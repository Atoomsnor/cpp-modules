/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:33:54 by roversch          #+#    #+#             */
/*   Updated: 2026/01/15 18:04:18 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &rhs)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = rhs.type;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog sounds" << std::endl;
}