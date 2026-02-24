/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 16:36:33 by roversch          #+#    #+#             */
/*   Updated: 2026/02/24 19:14:02 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#define PURPLE	"\033[0;34m"
#define GREEN	"\033[0;32m"
#define PINK	"\033[0;35m"
#define BLUE	"\033[0;36m"
#define RESET	"\033[0m"

template <typename T>
class	Array
{
	private:
		T*		arr;
		size_t	_size;

	public:
		//Constructor(s)
		Array();
		Array(size_t _size);

		//Rule of 3
		Array(const Array& rhs);
		Array&	operator=(const Array& rhs);
		~Array();

		//Accessing functions
		T&		operator[](const size_t rhs) const;
		size_t	size() const;

		//Exception
		class	OutOfBoundsException : public std::exception
		{
			public:
				virtual const char* what() const noexcept;
		};
};

#include "Array.tpp"