/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:13:38 by roversch          #+#    #+#             */
/*   Updated: 2026/01/15 18:26:49 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#define PURPLE	"\033[0;34m"
#define RESET	"\033[0m"

class	Animal
{
	protected:
		std::string	type;
		
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &rhs);
		virtual ~Animal();

		Animal&	operator=(const Animal &rhs);

		virtual void	makeSound() const;
		std::string		getType() const;
};