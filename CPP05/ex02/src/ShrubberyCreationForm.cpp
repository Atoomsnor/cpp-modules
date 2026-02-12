/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:32:41 by roversch          #+#    #+#             */
/*   Updated: 2026/02/12 17:31:44 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout << "ShrubberyCreationForm init constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs)
	: AForm(rhs)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	AForm::operator=(rhs);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm default destructor called" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (AForm::getIsSigned() == false)
	{
		std::cout << "Form " << AForm::getName() << " hasn't been signed yet" << std::endl; 
	}
	else
	{
		if (executor.getGrade() > AForm::getExecGrade())
			throw AForm::GradeTooLowException();

		std::string		out = this->target;
		out.append("_shrubbery");
		std::ofstream	outfile(out);

		outfile <<
			"       _-_\n"
			"    /`     `\\\n"
			"   |  .-. .-. |\n"
			"   |  | | | | |\n"
			"   |  |_| |_| |\n"
			"    \\         /\n"
			"      `-.__.-'\n"
			"        |||\n"
			"        |||\n"
			"        |||\n";

		outfile.close();
	}
}