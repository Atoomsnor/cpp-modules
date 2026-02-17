/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 14:03:03 by roversch          #+#    #+#             */
/*   Updated: 2026/02/17 13:24:00 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
	std::cout << "Bureaucrat init constructor called" << std::endl;
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& rhs) : name(rhs.name)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = rhs;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& rhs)
{
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->grade = rhs.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat default destructor called" << std::endl;
}

void	Bureaucrat::incrementGrade()
{
	std::cout << "Incrementing: " << this->grade << std::endl;
	if (grade - 1 > 150)
		throw GradeTooLowException();
	if (grade - 1 < 1)
		throw GradeTooHighException();
	this->grade--;
}

void	Bureaucrat::decrementGrade()
{
	std::cout << "Decrementing: " << this->grade << std::endl;
	if (grade + 1 > 150)
		throw GradeTooLowException();
	if (grade + 1 < 1)
		throw GradeTooHighException();
	this->grade++;
}

void	Bureaucrat::signForm(AForm& rhs)
{
	try
	{
		rhs.beSigned(*this);
	}
	catch (std::exception &e)
	{
		std::cout << this->name << " couldn't sign " << rhs.getName()
			<< " cause the grade was too low" << std::endl;
		return ;
	}
	std::cout << this->name << " signed " << rhs.getName() << std::endl;
}

void	Bureaucrat::executeForm(AForm const &form) const
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

const char*	Bureaucrat::GradeTooHighException::what() const noexcept
{
	return ("Grade too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const noexcept
{
	return ("Grade too low");
}

const std::string&	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (os);
}