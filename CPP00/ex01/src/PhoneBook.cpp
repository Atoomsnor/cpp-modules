/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:56:12 by roversch          #+#    #+#             */
/*   Updated: 2025/12/05 16:11:26 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook constructor called!" << std::endl;
	count = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destructor called!" << std::endl;
}

void	PhoneBook::moveContacts(void)
{
	std::cout << "Moving contacts" << std::endl;
	for (int i = 0; i < 2; i++)
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

	if (count == 3)
	{
		moveContacts();
		count = 2;
	}
	std::cout << "Adding contact nr: " << count + 1 << std::endl;
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
	if (count != 3)
		count++;
}

static void	print_search_contact(Contact &contact)
{
	std::cout << "First name: " << "'" << contact.getFirstName() <<  "'" << std::endl;
	std::cout << "Last name: " << "'" << contact.getLastName() << "'" << std::endl;
	std::cout << "Nickname: " << "'" << contact.getNickname() << "'" << std::endl;
	std::cout << "Phonenumber: " << "'" << contact.getPhoneNumber() << "'" << std::endl;
	std::cout << "Darkest secret: " << "'" << contact.getDarkestSecret() << "'" << std::endl;
}

void	PhoneBook::searchInterface(void)
{
	//fancy stupid pipes n shit
}

void	PhoneBook::searchContact(void)
{
	std::string number;
	int	idx;

	while (true)
	{
		std::cout << "Please enter contact nr (1-" << count << "): ";
		if (!std::getline(std::cin, number))
			return ;
		if (number.empty())
			continue ;
		idx = std::atoi(number.c_str()) - 1;
		if (idx >= 0 && idx < count + 1)
			break ;
		std::cout << "Invalid index, try again." << std::endl;
	}
	std::cout << "Displaying contact nr: " << number << std::endl;
	print_search_contact(contact[idx]);
}