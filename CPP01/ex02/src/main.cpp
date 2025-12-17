/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:06:25 by roversch          #+#    #+#             */
/*   Updated: 2025/12/17 17:14:37 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*ptr_brain = &brain;
	std::string &ref_brain = brain;

	std::cout << &brain << std::endl;
	std::cout << ptr_brain << std::endl;
	std::cout << &ref_brain << std::endl;

	std::cout << brain << std::endl;
	std::cout << *ptr_brain << std::endl;
	std::cout << ref_brain << std::endl;
}