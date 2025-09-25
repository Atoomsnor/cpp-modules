/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:02:13 by roversch          #+#    #+#             */
/*   Updated: 2025/09/25 10:52:43 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>

PhoneBook::PhoneBook() : count_(0), full_(false) {}

void	PhoneBook::addcontact()
{
	std::cout << "Pretending to add a contact" << std::endl;
	if (full_ == false)
		count_++;
	if (count_ == 8)
		full_ = true;
	std::cout << "Nr. of contacts: " << count_ << " Full? " << full_ << std::endl;
}

void	PhoneBook::searchcontact()
{
	std::cout << "Pretending to search a conctact" << std::endl;
}

int	main()
{
	PhoneBook pb;
	std::string command;
	
	std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
	while (true)
	{
		std::cout << "> ";
		std::getline(std::cin, command);
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			pb.addcontact();
		else if (command == "SEARCH")
			pb.searchcontact();
		else
			std::cout << "Unkown command. Please enter ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}