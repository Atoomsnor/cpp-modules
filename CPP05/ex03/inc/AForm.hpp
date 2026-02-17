/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:18:42 by roversch          #+#    #+#             */
/*   Updated: 2026/02/17 13:24:00 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class	Bureaucrat;

class	AForm
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			signGrade;
		const int			execGrade;

	public:
		//Constructor(s)
		AForm();
		AForm(const std::string& name, const int signGrade, const int execGrade);

		//Rule of 3
		AForm(const AForm& rhs);
		AForm&	operator=(const AForm& rhs);
		virtual ~AForm();

		//Member functions
		virtual void	beSigned(Bureaucrat& obj);
		virtual void	execute(Bureaucrat const& executor) const = 0;
		// virtual void	executeForm() const = 0;

		//Setters & Getters
		const std::string&	getName() const;
		bool				getIsSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;

		//Exceptions
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const noexcept;
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const noexcept;
		};
};
std::ostream&	operator<<(std::ostream& os, const AForm& obj);