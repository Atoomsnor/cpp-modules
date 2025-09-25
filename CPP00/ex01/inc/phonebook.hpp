/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:02:46 by roversch          #+#    #+#             */
/*   Updated: 2025/09/25 10:48:09 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook{
	private:
		Contact	contacts_[8];
		int		count_;
		bool	full_;
	public:
		PhoneBook();
		void addcontact();
		void searchcontact();
};

#endif