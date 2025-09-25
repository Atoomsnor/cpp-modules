/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:02:13 by roversch          #+#    #+#             */
/*   Updated: 2025/09/25 14:44:13 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>

PhoneBook::PhoneBook() : count_(0), full_(false) {}

void	PhoneBook::add_info()
{
	std::string first, last, nick, phone, secret;

	// std::cout << "Adding contact nr: " << count_ << std::endl;

	while (first.empty())
	{
		std::cout << "First name: ";
		if (!std::getline(std::cin, first))
			return;
	}
	while (last.empty())
	{
		std::cout << "Last name: ";
		if (!std::getline(std::cin, last))
			return;
	}
	while (nick.empty())
	{
		std::cout << "Nickname: ";
		if (!std::getline(std::cin, nick))
			return;
	}
	while (phone.empty())
	{
		std::cout << "Phonenumber: ";
		if (!std::getline(std::cin, phone))
			return;
	}
	while (secret.empty())
	{
		std::cout << "Darkest secret: ";
		if (!std::getline(std::cin, secret))
			return ;
	}

	if (full_ == false)
		count_++;
	if (count_ == 8)
		full_ = true;
	contacts_[count_].set_info(first, last, nick, phone, secret);
	std::cout << "Nr. of contacts: " << count_ << " Full? " << full_ << std::endl;
}

void	PhoneBook::search_info()
{
	std::string number;

	while (number.empty() || atoi(number.c_str()) > count_)
	{
		std::cout << "Please enter contact nr: ";
		if (!std::getline(std::cin, number))
				return;
	}

	std::cout << "Displaying contact nr: " << number << std::endl;
	contacts_[atoi(number.c_str())].display_info();
}

int	main()
{
	PhoneBook pb;
	std::string command;
	
	// std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
	while (true)
	{
		if (std::cin.eof())
			break ;
		std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
		std::cout << "> ";
		if (!std::getline(std::cin, command))
			break ;
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			pb.add_info();
		else if (command == "SEARCH")
			pb.search_info();
		else
			std::cout << "Unkown command. ";
	}
	std::cout << std::endl;
	std::cout << "Goodbye <3" << std::endl;
	return (0);
}