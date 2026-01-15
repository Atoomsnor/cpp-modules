/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 18:09:20 by roversch          #+#    #+#             */
/*   Updated: 2026/01/15 18:11:09 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class	Cat : public Animal
{
	private:

	public:
		Cat();
		Cat(const Cat &rhs);
		~Cat();

		Cat&	operator=(const Cat &rhs);

		void	makeSound() const;
};