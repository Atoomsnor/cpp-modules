/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:13:38 by roversch          #+#    #+#             */
/*   Updated: 2026/01/22 15:17:59 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

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

		virtual void	makeSound() const = 0;
		std::string		getType() const;
};