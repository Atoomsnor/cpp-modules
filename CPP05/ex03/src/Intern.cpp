/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 19:05:41 by roversch          #+#    #+#             */
/*   Updated: 2026/02/16 13:23:11 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern& rhs)
{
	std::cout << "Intern copy constructor called" << std::endl;
	(void)rhs;
}

Intern&	Intern::operator=(const Intern& rhs)
{
	std::cout << "Intern copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern default destructor called" << std::endl;
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	AForm* (Intern::*functions[3])(std::string) =
	{
		&Intern::makeShrubbery,
		&Intern::makeRobotomy,
		&Intern::makePresidential
	};
	
	std::string forms[3] = 
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	
	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
		{
			std::cout << "Intern creates " << name << " form." << std::endl;
			return ((this->*functions[i])(target));
		}
	}
	throw NonExistingForm();
}

AForm*	Intern::makeShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm*	Intern::makeRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::makePresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

const char*	Intern::NonExistingForm::what() const throw()
{
	return ("Non existing form");
}