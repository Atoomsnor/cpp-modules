/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:56:15 by roversch          #+#    #+#             */
/*   Updated: 2025/12/08 14:46:27 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	// std::cout << "Contact constructor called!" << std::endl;
}

Contact::~Contact(void)
{
	// std::cout << "Contact destructor called!" << std::endl;
}

void	Contact::setFirstName(std::string str)
{
	first_name = str;
	return ;
}

void	Contact::setLastName(std::string str)
{
	last_name = str;
	return ;
}

void	Contact::setNickname(std::string str)
{
	nickname = str;
	return ;
}

void	Contact::setPhoneNumber(std::string str)
{
	phone_number = str;
	return ;
}

void	Contact::setDarkestSecret(std::string str)
{
	darkest_secret = str;
	return ;
}

std::string	Contact::getFirstName(void) const
{
	return (first_name);
}

std::string Contact::getLastName(void) const
{
	return (last_name);
}

std::string	Contact::getNickname(void) const
{
	return (nickname);
}

std::string Contact::getPhoneNumber(void) const
{
	return (phone_number);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (darkest_secret);
}