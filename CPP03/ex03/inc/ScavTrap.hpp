/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:45:47 by roversch          #+#    #+#             */
/*   Updated: 2026/01/27 17:34:38 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	protected:
		static const unsigned int init_val_hp = 100;
		static const unsigned int init_val_ep = 50;
		static const unsigned int init_val_ad = 20;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &rhs);
		virtual	~ScavTrap();

		ScavTrap&	operator=(const ScavTrap &rhs);

		void	attack(const std::string &target);
		void	guardGate();
};
