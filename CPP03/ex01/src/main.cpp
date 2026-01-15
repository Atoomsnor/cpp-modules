/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 18:02:55 by roversch          #+#    #+#             */
/*   Updated: 2026/01/15 17:01:51 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	a("Clapy");

	std::cout << PURPLE << "-----" << std::endl;
	a.attack("boop");
	a.beRepaired(10);
	a.takeDamage(150);
	a.attack("beep");
	std::cout << "-----" << RESET << std::endl;

	ScavTrap	b("Scavy");

	std::cout << PINK << "-----" << std::endl;
	b.guardGate();
	b.attack("boop");
	b.beRepaired(10);
	b.takeDamage(90);
	b.attack("beep");
	std::cout << "-----" << RESET << std::endl;

	return (0);
}