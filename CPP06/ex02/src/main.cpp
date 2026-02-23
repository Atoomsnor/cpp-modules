/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 15:55:44 by roversch          #+#    #+#             */
/*   Updated: 2026/02/23 17:05:25 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>

Base* generate(void)
{
	int	number = rand() % 3;

	switch (number)
	{
		case	0:
			return (new A);
		case	1:
			return (new B);
		case	2:
			return (new C);
	}
	return (nullptr);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Identified pointer 'A'" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Identified pointer 'B'" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Identified pointer 'C'" << std::endl;
	else
		std::cout << "Identified Unknown Type" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Idetified reference 'A'" << std::endl;
		return ;
	}
	catch (std::bad_cast) {}

	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Identified reference 'B'" << std::endl;
		return ;
	}
	catch (std::bad_cast) {}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Identified reference 'C'" << std::endl;
		return ;
	}
	catch(std::bad_cast) {}
	
}


int	main()
{
	Base*	test = generate();
	identify(test);
	identify(*test);
	test = generate();
	identify(test);
	identify(*test);
	test = generate();
	identify(test);
	identify(*test);
	test = generate();
	identify(test);
	identify(*test);
	test = generate();
	identify(test);
	identify(*test);
	test = generate();
	identify(test);
	identify(*test);
	test = generate();
	identify(test);
	identify(*test);
}