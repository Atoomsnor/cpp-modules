/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:27:40 by roversch          #+#    #+#             */
/*   Updated: 2026/01/15 16:43:52 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
	private:
		std::string	name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &rhs);
		virtual ~DiamondTrap();

		DiamondTrap&	operator=(const DiamondTrap &rhs);

		void	attack(const std::string &target);
		void	whoAmI();
};