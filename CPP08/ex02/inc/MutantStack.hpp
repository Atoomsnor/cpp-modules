/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 13:13:06 by roversch          #+#    #+#             */
/*   Updated: 2026/04/06 14:30:44 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define PURPLE	"\033[0;34m"
#define GREEN	"\033[0;32m"
#define RESET	"\033[0m"

#include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
	private:

	public:
		// Typedefs
		typedef typename std::stack<T>::container_type			mutant_container_type;

		typedef typename mutant_container_type::iterator		iterator;
		typedef typename mutant_container_type::const_iterator	const_iterator;

		// Member functions
		iterator		begin();
		const_iterator	begin()	const;
		iterator		end();
		const_iterator	end() const;
};

#include "MutantStack.tpp"