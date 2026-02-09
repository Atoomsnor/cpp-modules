/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 14:02:17 by roversch          #+#    #+#             */
/*   Updated: 2026/02/09 15:38:10 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#define PURPLE	"\033[0;34m"
#define GREEN	"\033[0;32m"
#define PINK	"\033[0;35m"
#define RESET	"\033[0m"

class	Bureaucrat
{
	private:
		const std::string	name;
		int					grade;

	public:
		//Constructors
		Bureaucrat();
		Bureaucrat(std::string name, int grade);

		//Rule of 3
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat&	operator=(const Bureaucrat& other);
		~Bureaucrat();

		//Value manipulators
		void	incrementGrade();
		void	decrementGrade();

		//Setters & Getters
		const std::string&	getName() const;
		int					getGrade() const;

		//Exceptions
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};
//Offstream function
std::ostream&	operator<<(std::ostream& os, const Bureaucrat& obj);