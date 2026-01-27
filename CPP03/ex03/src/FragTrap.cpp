/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:55:45 by roversch          #+#    #+#             */
/*   Updated: 2026/01/27 17:39:56 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	name = "FragTrap";
	hitPoints = init_val_hp;
	energyPoints = init_val_ep;
	attackDamage = init_val_ad;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap init constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	this->name = name;
}

FragTrap::FragTrap(const FragTrap &rhs) : ClapTrap(rhs)
{
	 std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	ClapTrap::operator=(rhs);
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Fragtrap " << this->name << " Asks if you want a high five M'lord" << std::endl;
}