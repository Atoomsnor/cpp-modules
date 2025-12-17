/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:56:14 by roversch          #+#    #+#             */
/*   Updated: 2025/12/17 15:44:03 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string	name);
		~Zombie(void);

		void	announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);