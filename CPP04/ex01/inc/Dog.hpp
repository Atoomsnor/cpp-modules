/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:31:27 by roversch          #+#    #+#             */
/*   Updated: 2026/01/19 16:48:28 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	private:
		// Brain	*Brain;

	public:
		Dog();
		Dog(const Dog &rhs);
		~Dog();

		Dog&	operator=(const Dog &rhs);

		void	makeSound() const;
};