/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 14:01:49 by roversch          #+#    #+#             */
/*   Updated: 2025/12/23 15:34:01 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

enum	eLevel
{
	eUnknown,
	eDebug,
	eInfo,
	eWarning,
	eError,
};

class	Harl
{
	private:
		void	unknown(void);
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		Harl(void);
		~Harl(void);

		int		findlevel(std::string level);
		void	complain(std::string level);
};