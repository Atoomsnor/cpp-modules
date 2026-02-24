/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 11:31:15 by roversch          #+#    #+#             */
/*   Updated: 2026/02/24 11:48:49 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void	swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
const T&	min(const T& a, const T& b)
{
	return (b < a) ? b : a;
}

template <typename T>
const T&	max(const T& a, const T& b)
{
	return (b > a) ? b : a;
}