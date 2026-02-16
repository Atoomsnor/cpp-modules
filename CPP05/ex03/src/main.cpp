/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:07:12 by roversch          #+#    #+#             */
/*   Updated: 2026/02/16 13:04:33 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	// Intern someRandomIntern;
	// AForm* rrf;

	// rrf = someRandomIntern.makeForm("robotomy request", "bender");
	std::cout << PURPLE << "--Correct Shrubbery--" << std::endl;
	try
	{
		Bureaucrat	a("Albert", 1);
		std::cout << a << std::endl;
		Intern		interna;
		AForm*		forma = interna.makeForm("shrubbery creation", "shrubby");

		a.signForm(*forma);
		a.executeForm(*forma);

		delete forma;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << RESET;
	std::cout << GREEN << "--Correct Robotomy--" << std::endl;
	try
	{
		Bureaucrat	b("Bob", 1);
		std::cout << b << std::endl;
		Intern		internb;
		AForm*		formb = internb.makeForm("robotomy request", "clappy");

		b.signForm(*formb);
		b.executeForm(*formb);

		delete formb;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << RESET;
	std::cout << PINK << "--Correct Presidential--" << std::endl;
	try
	{
		Bureaucrat	c("Connor", 1);
		std::cout << c << std::endl;
		Intern		internc;
		AForm*		formc = internc.makeForm("presidential pardon", "luigi");

		c.signForm(*formc);
		c.executeForm(*formc);

		delete formc;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << RESET;
	std::cout << RED << "--Wrong Presidential--" << std::endl;
	try
	{
		Bureaucrat	d("Dedge", 1);
		std::cout << d << std::endl;
		Intern		internd;
		AForm*		formd = internd.makeForm("invalid form", "surely");

		d.signForm(*formd);
		d.executeForm(*formd);

		delete formd;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << RESET;
}