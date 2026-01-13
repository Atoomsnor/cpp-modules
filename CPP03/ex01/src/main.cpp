/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 18:02:55 by roversch          #+#    #+#             */
/*   Updated: 2026/01/13 14:51:10 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap	a("Scavy");	

	std::cout << "\033[0;35m" << "--A--" << "\033[0m" << std::endl;
	// a.guardGate();
	a.attack("boop");
	a.beRepaired(10);
	a.takeDamage(150);
	a.attack("beep");
	std::cout << "\033[0;35m" << "-----" << "\033[0m" << std::endl;

	ClapTrap	b("Clapy");
	ScavTrap	c = a;
	std::cout << "\033[0;34m" << "--B--" << "\033[0m" << std::endl;
	b.attack("boop");
	b.beRepaired(10);
	b.takeDamage(150);
	b.attack("beep");
	std::cout << "\033[0;33m" << "--C--" << "\033[0m" << std::endl;
	c.attack("boop");
	c.beRepaired(10);
	c.takeDamage(150);
	c.attack("beep");
	std::cout << "\033[0;33m" << "-----" << "\033[0m" << std::endl;

	return (0);
}