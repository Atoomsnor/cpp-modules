/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:56:15 by roversch          #+#    #+#             */
/*   Updated: 2025/11/28 17:46:11 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set_first_name(std::string str)
{
	first_name = str;
	return ;
}

void	Contact::set_last_name(std::string str)
{
	last_name = str;
	return ;
}

void	Contact::set_nickname(std::string str)
{
	nickname = str;
	return ;
}

void	Contact::set_phone_number(std::string str)
{
	phone_number = str;
	return ;
}

void	Contact::set_darkest_secret(std::string str)
{
	darkest_secret = str;
	return ;
}

std::string	Contact::get_first_name(void) const
{
	return (first_name);
}

std::string Contact::get_last_name(void) const
{
	return (last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (nickname);
}

std::string Contact::get_phone_number(void) const
{
	return (phone_number);
}

std::string	Contact::get_darkest_secret(void) const
{
	return (darkest_secret);
}