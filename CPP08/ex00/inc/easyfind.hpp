/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:07:34 by roversch          #+#    #+#             */
/*   Updated: 2026/02/26 18:59:08 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define PURPLE	"\033[0;34m"
#define GREEN	"\033[0;32m"
#define PINK	"\033[0;35m"
#define BLUE	"\033[0;36m"
#define RESET	"\033[0m"

template <typename T>
void	easyfind(T& arr, int toFind);

#include "easyfind.tpp"
