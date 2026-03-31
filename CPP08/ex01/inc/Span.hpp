/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:57:52 by roversch          #+#    #+#             */
/*   Updated: 2026/03/31 13:57:46 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define PURPLE	"\033[0;34m"
#define GREEN	"\033[0;32m"
#define PINK	"\033[0;35m"

#include <iostream>
#include <vector>

class	Span
{
	private:
		std::vector<int>	numbers;
		unsigned int		maxSize;

	public:
		//Constructor(s)
		Span();
		Span(unsigned int N);

		//Rule of 5
		Span(const Span& rhs);
		Span&	operator=(const Span& rhs);
		~Span();

		void	addNumber(int numb);
		void	addRange(std::vector<int> range);
		int		shortestSpan() const;
		int		longestSpan() const;
		void	print() const;

		unsigned int	getMaxSize() const;
};