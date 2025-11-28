/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:56:27 by roversch          #+#    #+#             */
/*   Updated: 2025/11/28 15:49:53 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <PhoneBook.hpp>

int	main()
{
	PhoneBook pb;
	std::string command;

	while (true)
	{
		std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
		std::cout << "> ";
		if (!std::getline(std::cin, command))
			break ;
		if (command == "ADD")
			pb.addContact();
		else if (command == "SEARCH")
			pb.getContact();
		if (command == "EXIT")
			break ;
		else
			std::cout << "Unknown Command" << std::endl;
	}
}