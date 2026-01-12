/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 18:02:55 by roversch          #+#    #+#             */
/*   Updated: 2026/01/12 18:48:14 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a("Clappy");
	a.attack("Stairs");
	a.takeDamage(5);
	a.beRepaired(6);
	a.takeDamage(11);
	a.attack("Stairs");
	a.takeDamage(11);
}