/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:56:57 by roversch          #+#    #+#             */
/*   Updated: 2025/12/17 15:46:55 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	Kwik("Kwik");
	Kwik.announce();

	Zombie	*Kwek = newZombie("Kwek");
	Kwek->announce();

	randomChump("Kwak");

	delete(Kwek);
}