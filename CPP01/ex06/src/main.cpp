/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 14:02:36 by roversch          #+#    #+#             */
/*   Updated: 2025/12/23 16:21:21 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

int	main(void)
{
	Harl	harl;

	std::cout << "--------------------------" << std::endl;
	harl.complain("DEBUG");
	std::cout << "--------------------------" << std::endl;
	harl.complain("INFO");
	std::cout << "--------------------------" << std::endl;
	harl.complain("WARNING");
	std::cout << "--------------------------" << std::endl;
	harl.complain("ERROR");
	std::cout << "--------------------------" << std::endl;
	harl.complain("IDK");
}