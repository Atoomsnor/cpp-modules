/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:09:07 by roversch          #+#    #+#             */
/*   Updated: 2026/02/06 13:35:04 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	this->brain = new Brain;
}

Cat::Cat(const Cat &rhs) : Animal(rhs)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*rhs.brain);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat default destructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	delete this->brain;
	this->brain = new Brain(*rhs.brain);
	this->type = rhs.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Cat sounds" << std::endl;
}

void	Cat::setIdea(int index, std::string idea)
{
	this->brain->setIdea(index, idea);
}

std::string	Cat::getIdea(int index) const
{
	return (this->brain->getIdea(index));
}
