/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 13:27:59 by roversch          #+#    #+#             */
/*   Updated: 2026/02/16 13:36:24 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	ScalarConverter
{
	private:

	public:
		//Constructor(s)
		ScalarConverter();

		//Rule of 5
		ScalarConverter(const ScalarConverter& rhs);
		ScalarConverter(ScalarConverter&& rhs) noexcept;
		ScalarConverter&	operator=(const ScalarConverter& rhs);
		ScalarConverter&	operator=(ScalarConverter&& rhs) noexcept;
		~ScalarConverter() noexcept;
};