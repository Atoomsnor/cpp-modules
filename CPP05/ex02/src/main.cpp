/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:07:12 by roversch          #+#    #+#             */
/*   Updated: 2026/02/12 17:33:02 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	std::cout << PURPLE << "--Correct Shrubbery--" << std::endl;
	try
	{
		Bureaucrat	a("Albert", 2);
		std::cout << a << std::endl;
		AForm*	af = new ShrubberyCreationForm("shrub");
		a.signForm(*af);
		a.executeForm(*af);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << RESET;
	std::cout << GREEN << "--Correct Robotomy--" << std::endl;
	try
	{
		Bureaucrat	b("Bob", 20);
		std::cout << b << std::endl;
		AForm*	bf = new RobotomyRequestForm("robotomy");
		b.signForm(*bf);
		b.executeForm(*bf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << RESET;
	std::cout << PINK << "--Correct Presidential--" << std::endl;
	try
	{
		Bureaucrat	c("Connor", 5);
		std::cout << c << std::endl;
		AForm*	cf = new PresidentialPardonForm("President");
		c.signForm(*cf);
		c.executeForm(*cf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << RESET;
	std::cout << RED << "--Wrong Presidential--" << std::endl;
	try
	{
		Bureaucrat	d("Dedge", 146);
		std::cout << d << std::endl;
		AForm*	df = new ShrubberyCreationForm("shrub");
		d.signForm(*df);
		d.executeForm(*df);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << RESET;
}