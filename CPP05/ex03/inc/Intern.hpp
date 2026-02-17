/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 19:05:33 by roversch          #+#    #+#             */
/*   Updated: 2026/02/17 13:24:00 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern
{
	private:
		//Member functions
		AForm*	makeShrubbery(std::string target);
		AForm*	makeRobotomy(std::string target);
		AForm*	makePresidential(std::string target);

	public:
		//Constructor(s)
		Intern();

		//Rule of 3
		Intern(const Intern& rhs);
		Intern&	operator=(const Intern& rhs);
		~Intern();

		//Member functions
		AForm*	makeForm(std::string name, std::string target);

		class	NonExistingForm : public std::exception
		{
			public:
				virtual const char* what() const noexcept;
		};

};