/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:56:12 by roversch          #+#    #+#             */
/*   Updated: 2025/12/04 17:18:49 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook constructor called!" << std::endl;
	count = 0;
	full = false;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destructor called!" << std::endl;
}

void	PhoneBook::addContact()
{
	std::string first, last, nick, phone, secret;

	std::cout << "Adding contact nr: " << count << std::endl;

	while (first.empty())
	{
		std::cout << "First name: ";
		if (!std::getline(std::cin, first))
			return ;
		contacts[count].setFirstName(first);
	}
	while (last.empty())
	{
		std::cout << "Last name: ";
		if (!std::getline(std::cin, last))
			return ;
		contacts[count].setLastName(last);
	}
	while (nick.empty())
	{
		std::cout << "Nickname: ";
		if (!std::getline(std::cin, nick))
			return ;
		contacts[count].setNickname(nick);
	}
	while (phone.empty())
	{
		std::cout << "Phone Number: ";
		if (!std::getline(std::cin, phone))
			return ;
		contacts[count].setPhoneNumber(phone);
	}
	while (secret.empty())
	{
		std::cout << "Darkest Secret: ";
		if (!std::getline(std::cin, secret))
			return ;
		contacts[count].setDarkestSecret(secret);
	}
	if (full == false)
		count++;
	if (count == 8)
		full = true;
}

static void	print_get_contact(Contact contact)
{
	
}

void	PhoneBook::getContact()
{
	std::string number;

	while (number.empty() || std::atoi(number.c_str()) > count)
	{
		std::cout << "Please enter contact nr: ";
		if (!std::getline(std::cin, number))
				return;
	}
	std::cout << "Displaying contact nr: " << number << std::endl;
	print_get_contact(contacts[std::atoi(number.c_str()) - 1]);
}