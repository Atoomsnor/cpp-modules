/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:07:30 by roversch          #+#    #+#             */
/*   Updated: 2026/03/31 12:49:22 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>
#include <exception>
#include <iostream>

template <typename T>
void easyfind(const T& arr, int toFind)
{
	typename T::iterator	it;

	it = std::find(arr.begin(), arr.end(), toFind);

	if (it == arr.end())
		throw std::exception();
	else
		std::cout << "Found: " << *it << std::endl;
}