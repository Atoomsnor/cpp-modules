/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:07:53 by roversch          #+#    #+#             */
/*   Updated: 2026/02/17 13:24:00 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	private:
		std::string	target;

	public:
		//Constructor(s)
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string& target);

		//Rule of 3
		PresidentialPardonForm(const PresidentialPardonForm& rhs);
		PresidentialPardonForm&	operator=(const PresidentialPardonForm& rhs);
		~PresidentialPardonForm();

		//Member functions
		void	execute(Bureaucrat const& executor) const override;
};