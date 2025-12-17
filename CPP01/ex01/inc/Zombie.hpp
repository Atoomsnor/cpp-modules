/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:03:40 by roversch          #+#    #+#             */
/*   Updated: 2025/12/17 16:19:51 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Zombie
{
	private:
		std::string	name;

	public:
		Zombie(void);
		~Zombie(void);

		void	announce(void);
		void	setName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);