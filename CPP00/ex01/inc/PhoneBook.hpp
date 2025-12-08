/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:55:08 by roversch          #+#    #+#             */
/*   Updated: 2025/12/08 14:47:05 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact	contact[8];
		int		count;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	moveContacts(void);
		void	addContact(void);
		void	searchContact(void) const;
		void	searchInterface(void) const;

};

#endif