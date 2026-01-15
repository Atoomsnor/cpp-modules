/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:27:44 by roversch          #+#    #+#             */
/*   Updated: 2026/01/15 16:58:32 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->name = "DiamondTrap";
	ClapTrap::name = "DiamondTrap_clap_name";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap init constructor called" << std::endl;
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &rhs)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = rhs;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &rhs)
{
	std::cout << "DiamondTrap assignment operator called" << std::endl;
	ClapTrap::operator=(rhs);
	return (*this);
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap " << this->name << ". Their ClapTrap name is: " << ClapTrap::name << std::endl;
}