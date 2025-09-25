/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:21:11 by roversch          #+#    #+#             */
/*   Updated: 2025/09/25 12:33:10 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact{
	private:
		std::string	fst_name_;
		std::string	lst_name_;
		std::string	nick_name_;
		std::string	phone_nbr_;
		std::string	dark_scrt_;
	public:
		void set_info(
			const std::string& first,
			const std::string& last,
			const std::string& nick,
			const std::string& number,
			const std::string& secret);
		void display_info();
};

#endif