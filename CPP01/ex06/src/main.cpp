/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 14:02:36 by roversch          #+#    #+#             */
/*   Updated: 2026/01/06 18:06:23 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc == 2)
		harl.complain(argv[1]);
	else
		std::cout << "Missing Argument" << std::endl;
}