/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:20:39 by roversch          #+#    #+#             */
/*   Updated: 2026/02/17 13:24:00 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class	RobotomyRequestForm : public AForm
{
	private:
		std::string	target;

	public:
		//Constructor(s)
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string& target);

		//Rule of 3
		RobotomyRequestForm(const RobotomyRequestForm& rhs);
		RobotomyRequestForm&	operator=(const RobotomyRequestForm& rhs);
		~RobotomyRequestForm();

		//Member functions
		void	execute(Bureaucrat const& executor) const override;
};