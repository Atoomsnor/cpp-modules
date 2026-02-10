/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:18:36 by roversch          #+#    #+#             */
/*   Updated: 2026/02/10 11:20:28 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const Form& rhs)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = rhs;
}

Form::~Form()
{
	std::cout << "Form default destructor called" << std::endl;
}

Form&	Form::operator=(const Form& rhs)
{
	std::cout << "Form copy assignment operator called" << std::endl;
}
