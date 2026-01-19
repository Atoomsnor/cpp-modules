/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:34:57 by roversch          #+#    #+#             */
/*   Updated: 2026/01/19 16:48:14 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain();
		Brain(const Brain &rhs);
		~Brain();

		Brain&	operator=(const Brain &rhs);

		std::string		getIdea(int index) const;
		void			setIdea(int index, std::string idea);
};