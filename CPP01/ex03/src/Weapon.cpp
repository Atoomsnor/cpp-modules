/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:24:52 by roversch          #+#    #+#             */
/*   Updated: 2026/01/06 18:01:41 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : type(type) {}

Weapon::~Weapon(void) {}

void	Weapon::setType(const std::string &type)
{
	this->type = type;
}

const std::string	&Weapon::getType(void) const
{
	return (type);
}