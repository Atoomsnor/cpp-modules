/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:55:37 by roversch          #+#    #+#             */
/*   Updated: 2026/01/27 17:31:31 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	protected:
		static const unsigned int init_val_hp = 100;
		static const unsigned int init_val_ep = 100;
		static const unsigned int init_val_ad = 30;

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &rhs);
		virtual	~FragTrap();

		FragTrap&	operator=(const FragTrap &rhs);

		void	highFivesGuys(void);
};