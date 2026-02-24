/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 11:51:25 by roversch          #+#    #+#             */
/*   Updated: 2026/02/24 18:59:28 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#define PURPLE	"\033[0;34m"
#define GREEN	"\033[0;32m"
#define PINK	"\033[0;35m"
#define BLUE	"\033[0;36m"


template <typename T>
void	print(const T& arr)
{
	std::cout << arr << std::endl;
}

template <typename T>
void	increment(T& arr)
{
	arr++;
}

template <typename T, typename Func>
void	iter(T* arr, const size_t len, Func f)
{
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}
