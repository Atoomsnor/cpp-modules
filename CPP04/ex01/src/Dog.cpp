/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:33:54 by roversch          #+#    #+#             */
/*   Updated: 2026/02/06 13:20:11 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	this->brain = new Brain;
}

Dog::Dog(const Dog &rhs) : Animal(rhs)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain(*rhs.brain);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog default destructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	delete this->brain;
	this->brain = new Brain(*rhs.brain);
	this->type = rhs.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog sounds" << std::endl;
}

void	Dog::setIdea(int index, std::string idea)
{
	this->brain->setIdea(index, idea);
}

std::string	Dog::getIdea(int index) const
{
	return (this->brain->getIdea(index));
}
