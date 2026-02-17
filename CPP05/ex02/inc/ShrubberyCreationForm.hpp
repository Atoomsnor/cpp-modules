/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:07:28 by roversch          #+#    #+#             */
/*   Updated: 2026/02/17 13:24:00 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class	ShrubberyCreationForm : public AForm
{
	private:
		std::string	target;

	public:
		//Constructor(s)
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& target);

		//Rule of 3
		ShrubberyCreationForm(const ShrubberyCreationForm& rhs);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& rhs);
		~ShrubberyCreationForm();

		//Member functions
		void	execute(Bureaucrat const& executor) const override;
};