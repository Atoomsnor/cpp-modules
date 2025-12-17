/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:23:26 by roversch          #+#    #+#             */
/*   Updated: 2025/12/17 17:54:10 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Weapon.hpp"
# include <iostream>

class	HumanA
{
	private:
		Weapon		*weapon;
		std::string	name;

	public:
		HumanA(std::string name, Weapon &Weapon);
		~HumanA(void);

		void	attack(void);
};