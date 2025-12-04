/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 15:43:30 by roversch          #+#    #+#             */
/*   Updated: 2025/12/04 16:32:33 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		std::string str = argv[i];
		std::string::iterator it;
		for (it = str.begin(); it < str.end(); it++)
			std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(*it)));
	}
	std::cout << std::endl;
	return (0);
}
