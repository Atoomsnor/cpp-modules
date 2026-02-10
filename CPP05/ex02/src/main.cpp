/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:07:12 by roversch          #+#    #+#             */
/*   Updated: 2026/02/10 18:16:27 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	// std::cout << PURPLE << "--Invalid Grade--" << std::endl;
	// try
	// {
	// 	Bureaucrat	a("Albert", 2);
	// 	std::cout << a << std::endl;
	// 	// AForm		af("aForm", 1, 1);
	// 	// std::cout << af << std::endl;
	// 	// a.signForm(af);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// std::cout << RESET;
	std::cout << GREEN << "--Correct Form--" << std::endl;
	try
	{
		Bureaucrat	b("Bob", 20);
		std::cout << b << std::endl;
		AForm*	bf = new ShrubberyCreationForm("home");
		b.signForm(*bf);
		b.executeForm(*bf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << RESET;
	// std::cout << PINK << "--Invalid Form--" << std::endl;
	// try
	// {
	// 	Bureaucrat	c("Connor", 20);
	// 	std::cout << c << std::endl;
	// 	// AForm		cf("cForm", 0, 20);
	// 	// std::cout << cf << std::endl;
	// 	// c.signForm(cf);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// std::cout << RESET;
}