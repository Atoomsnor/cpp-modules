/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:45:54 by roversch          #+#    #+#             */
/*   Updated: 2026/01/27 17:34:23 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	name = "ScavTrap";
	hitPoints = init_val_hp;
	energyPoints = init_val_ep;
	attackDamage = init_val_ad;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap init constructor called" << std::endl;
	hitPoints = init_val_hp;
	energyPoints = init_val_ep;
	attackDamage = init_val_ad;
	this->name = name;
}

ScavTrap::ScavTrap(const ScavTrap &rhs) : ClapTrap(rhs)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	ClapTrap::operator=(rhs);
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " mauls " << target << ", causing "
			<< this->attackDamage << " points of emotional damage!" << std::endl;
		energyPoints--;
		std::cout << "ScavTrap " << this->name << " now has: " << hitPoints << " HP and " << energyPoints << " EP" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " has ran out of HP or EP" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode!" << std::endl;
}