/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:45:47 by roversch          #+#    #+#             */
/*   Updated: 2026/01/15 12:21:48 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &rhs);
		~ScavTrap();

		ScavTrap& operator=(const ScavTrap &rhs);

		void	attack(const std::string &target);
		void	guardGate();
};
