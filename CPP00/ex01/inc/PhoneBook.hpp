/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:55:08 by roversch          #+#    #+#             */
/*   Updated: 2025/12/04 16:43:29 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact	contacts[8];
		int		count;
		bool	full;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	addContact();
		void	getContact();
		void	printContact();
};

#endif