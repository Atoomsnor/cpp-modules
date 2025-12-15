/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:56:12 by roversch          #+#    #+#             */
/*   Updated: 2025/12/15 13:28:27 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	// std::cout << "PhoneBook constructor called!" << std::endl;
	count = 0;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "PhoneBook destructor called!" << std::endl;
}

void	PhoneBook::moveContacts(void)
{
	for (int i = 0; i < 7; i++)
	{
		contact[i].setFirstName(contact[i + 1].getFirstName());
		contact[i].setLastName(contact[i + 1].getLastName());
		contact[i].setNickname(contact[i + 1].getNickname());
		contact[i].setPhoneNumber(contact[i + 1].getPhoneNumber());
		contact[i].setDarkestSecret(contact[i + 1].getDarkestSecret());
	}
}

void	PhoneBook::addContact(void)
{
	std::string first, last, nick, phone, secret;

	if (count == 8)
	{
		moveContacts();
		count = 7;
	}
	while (first.empty())
	{
		std::cout << "First name: ";
		if (!std::getline(std::cin, first))
			return ;
		contact[count].setFirstName(first);
	}
	while (last.empty())
	{
		std::cout << "Last name: ";
		if (!std::getline(std::cin, last))
			return ;
		contact[count].setLastName(last);
	}
	while (nick.empty())
	{
		std::cout << "Nickname: ";
		if (!std::getline(std::cin, nick))
			return ;
		contact[count].setNickname(nick);
	}
	while (phone.empty())
	{
		std::cout << "Phone Number: ";
		if (!std::getline(std::cin, phone))
			return ;
		contact[count].setPhoneNumber(phone);
	}
	while (secret.empty())
	{
		std::cout << "Darkest Secret: ";
		if (!std::getline(std::cin, secret))
			return ;
		contact[count].setDarkestSecret(secret);
	}
	if (count != 8)
		count++;
}

static void	print_search_contact(Contact contact)
{
	std::cout << "First name: " << "'" << contact.getFirstName() <<  "'" << std::endl;
	std::cout << "Last name: " << "'" << contact.getLastName() << "'" << std::endl;
	std::cout << "Nickname: " << "'" << contact.getNickname() << "'" << std::endl;
	std::cout << "Phonenumber: " << "'" << contact.getPhoneNumber() << "'" << std::endl;
	std::cout << "Darkest secret: " << "'" << contact.getDarkestSecret() << "'" << std::endl;
}

static void	format_str(std::string str)
{
	if (str.size() > 10)
		std::cout << str.substr(0, 9) + ".";
	else
	{
		for (int i = 0; (i + str.size()) < 10; i++)
			std::cout << " ";
		std::cout << str;
	}
}

void	PhoneBook::searchInterface(void) const
{
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < 9; j++)
			std::cout << " ";
		std::cout << i + 1;
		std::cout << "|";
		format_str(contact[i].getFirstName());
		std::cout << "|";
		format_str(contact[i].getLastName());
		std::cout << "|";
		format_str(contact[i].getNickname());
		std::cout << std::endl;
	}
}

void	PhoneBook::searchContact(void) const 
{
	std::string number;
	int	idx;

	searchInterface();
	while (true)
	{
		std::cout << "Please enter contact nr (1-" << count << "): ";
		if (!std::getline(std::cin, number))
			return ;
		if (number.empty())
			continue ;
		idx = std::atoi(number.c_str()) - 1;
		if (idx >= 0 && idx < count)
			break ;
		std::cout << "Invalid index, try again." << std::endl;
	}
	std::cout << "Displaying contact nr: " << number << std::endl;
	print_search_contact(contact[idx]);
}