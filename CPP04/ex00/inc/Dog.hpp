/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:31:27 by roversch          #+#    #+#             */
/*   Updated: 2026/01/15 17:33:34 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class	Dog : public Animal
{
	private:
	
	public:
		Dog();
		Dog(const Dog &rhs);
		~Dog();

		Dog&	operator=(const Dog &rhs);

		void	makeSound() const;
};