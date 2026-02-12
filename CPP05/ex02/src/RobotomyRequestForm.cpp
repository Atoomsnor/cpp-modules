/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:20:33 by roversch          #+#    #+#             */
/*   Updated: 2026/02/12 18:57:47 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout << "RobotomyRequestForm init constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rhs)
	: AForm(rhs)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	AForm::operator=(rhs);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm default destructor called" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (AForm::getIsSigned() == false)
	{
		std::cout << "Form " << AForm::getName() << " hasn't been signed yet" << std::endl; 
	}
	else
	{
		if (executor.getGrade() > AForm::getExecGrade())
			throw AForm::GradeTooLowException();

		std::cout << "Funny drilling noises" << std::endl;
		if (rand() % 2)
			std::cout << "Robotomized successfully" << std::endl;
		else
			std::cout << "Robotomized unsuccessfully" << std::endl;		
	}
}
