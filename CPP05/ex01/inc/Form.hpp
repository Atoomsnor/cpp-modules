/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:18:42 by roversch          #+#    #+#             */
/*   Updated: 2026/02/10 16:53:11 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class	Bureaucrat;

class	Form
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			signGrade;
		const int			execGrade;

	public:
		//Constructor(s)
		Form();
		Form(const std::string& name, const int signGrade, const int execGrade);

		//Rule of 3
		Form(const Form& rhs);
		Form&	operator=(const Form& rhs);
		~Form();

		//Member functions
		void	beSigned(Bureaucrat& obj);

		//Setters & Getters
		const std::string&	getName() const; //maybe no &?
		bool				getIsSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;

		//Exceptions
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
};
std::ostream&	operator<<(std::ostream& os, const Form& obj);