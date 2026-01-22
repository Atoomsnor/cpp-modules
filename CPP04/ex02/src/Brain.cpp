/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:34:48 by roversch          #+#    #+#             */
/*   Updated: 2026/01/22 13:25:16 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string	ideas[100];

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &rhs)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain &rhs)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

std::string	Brain::getIdea(int index) const
{
	return (this->ideas[index]);
}

void	Brain::setIdea(int index, std::string idea)
{
	this->ideas[index] = idea;
}