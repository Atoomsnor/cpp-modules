/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 18:03:04 by roversch          #+#    #+#             */
/*   Updated: 2026/01/27 17:24:10 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default")
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
	std::cout << "ClapTrap init constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Claptrap copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this == &rhs)
		return (*this);
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		std::cout << "Claptrap " << this->name << " attacks " << target << ", causing "
			<< this->attackDamage << " points of damage!" << std::endl;
		energyPoints--;
		std::cout << "Claptrap " << this->name << " now has: " << hitPoints << " HP and " << energyPoints << " EP" << std::endl;
	}
	else
		std::cout << "Claptrap " << this->name << " has ran out of HP or EP" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > 0)
	{
		std::cout << "Claptrap " << this->name << " is attacked for: " << amount << " points of damage!" << std::endl;
		if (amount >= hitPoints)
			hitPoints = 0;
		else
			this->hitPoints -= amount;
		std::cout << "Claptrap " << this->name << " now has: " << hitPoints << " HP and " << energyPoints << " EP" << std::endl;
	}
	else
		std::cout << "Claptrap " << this->name << " has ran out of HP or EP" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		std::cout << "Claptrap "<< this->name << " is repaired for: " << amount << " points of health!" << std::endl;
		this->hitPoints += amount;
		energyPoints--;
		std::cout << "Claptrap " << this->name << " now has: " << hitPoints << " HP and " << energyPoints << " EP" << std::endl;
	}
	else
		std::cout << "Claptrap " << this->name << " has ran out of HP or EP" << std::endl;
}

std::string		ClapTrap::getName() const
{
	return (this->name);
}

unsigned int	ClapTrap::getHitPoints() const
{
	return (this->hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints() const
{
	return (this->energyPoints);
}

unsigned int	ClapTrap::getAttackDamage() const
{
	return (this->attackDamage);
}