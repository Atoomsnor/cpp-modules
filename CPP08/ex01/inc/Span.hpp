/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:57:52 by roversch          #+#    #+#             */
/*   Updated: 2026/03/09 13:24:59 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
		int		shortestSpan() const;
		int		longestSpan() const;
		void	print() const;

		unsigned int	getMaxSize() const;
};