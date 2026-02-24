/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 16:44:05 by roversch          #+#    #+#             */
/*   Updated: 2026/02/24 19:13:07 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
	: arr(nullptr), _size(0)
{
	std::cout << "Array default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(size_t n)
	: arr(new T[n]), _size(n)
{
	std::cout << "Array init constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(const Array& rhs)
	: arr(nullptr), _size(0)
{
	std::cout << "Array copy constructor called" << std::endl;
	*this = rhs;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& rhs)
{
	std::cout << "Array copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	delete[] arr;
	_size = rhs._size;
	arr = new T[_size];
	for (size_t i = 0; i < _size; i++)
		arr[i] = rhs.arr[i];
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] arr;
}

template <typename T>
T&	Array<T>::operator[](const size_t i) const
{
	if (i >= _size)
		throw OutOfBoundsException();
	return (arr[i]);
}

template <typename T>
size_t	Array<T>::size() const
{
	return (_size);
}

template <typename T>
const	char* Array<T>::OutOfBoundsException::what() const noexcept
{
	return ("Array index out of bounds");
}