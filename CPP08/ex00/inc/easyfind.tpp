/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:07:30 by roversch          #+#    #+#             */
/*   Updated: 2026/04/06 15:04:49 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>
#include <exception>
#include <iostream>

template <typename T>
void easyfind(T& arr, int toFind)
{
	typename T::iterator	it;

	it = std::find(arr.begin(), arr.end(), toFind);

	if (it == arr.end())
		throw std::exception();
	else
		std::cout << "Found: " << *it << std::endl;
}