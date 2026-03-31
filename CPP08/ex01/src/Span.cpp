/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:57:39 by roversch          #+#    #+#             */
/*   Updated: 2026/03/31 13:47:03 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <climits>

Span::Span() : maxSize(0) {}

Span::Span(unsigned int N) : maxSize(N) {}

Span::Span(const Span& rhs)
{
	std::cout << "Span copy constructor called" << std::endl;
	*this = rhs;
}

Span&	Span::operator=(const Span& rhs)
{
	std::cout << "Span copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->maxSize = rhs.maxSize;
	this->numbers = rhs.numbers;
	return (*this);
}

Span::~Span() {}

void	Span::addNumber(int numb)
{
	if (numbers.size() >= maxSize)
		throw std::exception();
	numbers.push_back(numb);
}

void	Span::addRange(std::vector<int> range)
{
	if (numbers.size() + range.size() > maxSize)
		throw std::exception();
	numbers.insert(numbers.end(), range.begin(), range.end());
}

int	Span::shortestSpan() const
{
	if (numbers.size() < 2)
		throw std::exception();

	std::vector<int> copy = this->numbers;
	std::sort(copy.begin(), copy.end());

	int	shortest = INT_MAX;
	for (auto it = copy.begin() + 1; it != copy.end(); it++)
	{
		int	diff = *it - *(it - 1);
		if (diff < shortest)
			shortest = diff;
	}
	return (shortest);
}

int	Span::longestSpan() const
{
	if (numbers.size() < 2)
		throw std::exception();
	
	int	max = *std::max_element(numbers.begin(), numbers.end());
	int	min = *std::min_element(numbers.begin(), numbers.end());
	return (max - min);
}

void	Span::print() const
{
	for (std::vector<int>::const_iterator it = numbers.begin(); it != numbers.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

unsigned int	Span::getMaxSize() const
{
	return (this->maxSize);
}
