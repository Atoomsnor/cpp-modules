/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:22:03 by roversch          #+#    #+#             */
/*   Updated: 2026/02/12 18:59:21 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: AForm("PresidentialPardonForm", 25, 5), target(target)
{
	std::cout << "PresidentialPardonForm init constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& rhs)
	: AForm(rhs)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	AForm::operator=(rhs);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm default destructor called" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (AForm::getIsSigned() == false)
	{
		std::cout << "Form " << AForm::getName() << " hasn't been signed yet" << std::endl; 
	}
	else
	{
		if (executor.getGrade() > AForm::getExecGrade())
			throw AForm::GradeTooLowException();

		std::cout << this->target << " has been pradoned by Zaphod Beeblebrox" << std::endl;
	}
}
