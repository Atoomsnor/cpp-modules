/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:18:36 by roversch          #+#    #+#             */
/*   Updated: 2026/02/10 13:37:15 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("form"), isSigned(false), signGrade(1), execGrade(1)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string name, int signGrade, int execGrade)
	: name(name), isSigned(false), signGrade(signGrade), execGrade(execGrade)
{
	std::cout << "Form init constructor called" << std::endl;
	if (signGrade > 150)
		throw GradeTooLowException();
	if (signGrade < 1)
		throw GradeTooHighException();
}

Form::Form(const Form& rhs)
	: name(rhs.name), isSigned(rhs.isSigned), signGrade(rhs.signGrade), execGrade(rhs.execGrade)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form&	Form::operator=(const Form& rhs)
{
	std::cout << "Form copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->isSigned = rhs.isSigned;
	return (*this);
}

Form::~Form()
{
	std::cout << "Form default destructor called" << std::endl;
}

void	Form::beSigned(Bureaucrat& obj)
{
	if (obj.getGrade() <= this->getSignGrade())
		this->isSigned = true;
	else
		throw GradeTooLowException();
}

const std::string&	Form::getName() const
{
	return (this->name);
}

bool	Form::getIsSigned() const
{
	return (this->isSigned);
}

int	Form::getSignGrade() const
{
	return (this->signGrade);
}

int	Form::getExecGrade() const
{
	return (this->execGrade);
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream&	operator<<(std::ostream& os, const Form& obj)
{
	os << obj.getName() << ", sign status " << obj.getSignGrade();
	return (os);
}