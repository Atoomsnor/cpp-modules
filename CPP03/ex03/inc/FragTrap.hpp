/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 16:55:37 by roversch          #+#    #+#             */
/*   Updated: 2026/01/15 16:24:06 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &rhs);
		virtual	~FragTrap();

		FragTrap&	operator=(const FragTrap &rhs);

		void	highFivesGuys(void);
};