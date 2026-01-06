/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:23:30 by roversch          #+#    #+#             */
/*   Updated: 2026/01/06 17:53:57 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class Weapon
{
	private:
		std::string	type;

	public:
		Weapon(const std::string &type);
		~Weapon(void);

		void				setType(const std::string &type);
		const std::string	&getType(void) const;
};