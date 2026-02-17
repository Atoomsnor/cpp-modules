/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:18:36 by roversch          #+#    #+#             */
/*   Updated: 2026/02/17 13:24:00 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("form"), isSigned(false), signGrade(1), execGrade(1)
{
	std::cout << "Form default constructor called" << std::endl;
}

AForm::AForm(const std::string& name, int signGrade, int execGrade)
	: name(name), isSigned(false), signGrade(signGrade), execGrade(execGrade)
{
	std::cout << "Form init constructor called" << std::endl;
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm& rhs)
	: name(rhs.name), isSigned(rhs.isSigned), signGrade(rhs.signGrade), execGrade(rhs.execGrade)
{
	std::cout << "Form copy constructor called" << std::endl;
}

AForm&	AForm::operator=(const AForm& rhs)
{
	std::cout << "Form copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->isSigned = rhs.isSigned;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "Form default destructor called" << std::endl;
}

void	AForm::beSigned(Bureaucrat& obj)
{
	if (obj.getGrade() <= this->getSignGrade())
		this->isSigned = true;
	else
		throw GradeTooLowException();
}

const std::string&	AForm::getName() const
{
	return (this->name);
}

bool	AForm::getIsSigned() const
{
	return (this->isSigned);
}

int	AForm::getSignGrade() const
{
	return (this->signGrade);
}

int	AForm::getExecGrade() const
{
	return (this->execGrade);
}

const char*	AForm::GradeTooHighException::what() const noexcept
{
	return ("Grade too high");
}

const char*	AForm::GradeTooLowException::what() const noexcept
{
	return ("Grade too low");
}

std::ostream&	operator<<(std::ostream& os, const AForm& obj)
{
	os << obj.getName() << ", sign status " << obj.getSignGrade();
	return (os);
}