/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:55:08 by roversch          #+#    #+#             */
/*   Updated: 2025/12/05 16:11:16 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact	contact[3];
		int		count;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	moveContacts();
		void	addContact();
		void	searchContact();
		void	searchInterface();

};

#endif