/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 13:02:44 by roversch          #+#    #+#             */
/*   Updated: 2026/02/23 15:50:04 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

// Non-empty structure as per subject
struct	Data
{
	std::string	string;
};

class	Serializer
{
	private:
		// Delete Constructor so we cannot initialize
		Serializer() =  delete;

	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};