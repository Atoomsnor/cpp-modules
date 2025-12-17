/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:23:30 by roversch          #+#    #+#             */
/*   Updated: 2025/12/17 17:42:30 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Weapon
{
	private:
		std::string	type;

	public:
		Weapon(std::string type);
		~Weapon(void);

		void				setType(std::string type);
		const std::string	&getType(void);
};