/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:23:26 by roversch          #+#    #+#             */
/*   Updated: 2025/12/19 13:50:54 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Weapon.hpp"

class	HumanA
{
	private:
		Weapon		*weapon;
		std::string	name;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		void	attack(void);
};