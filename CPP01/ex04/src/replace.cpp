/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:11:27 by roversch          #+#    #+#             */
/*   Updated: 2025/12/23 16:52:56 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	replace(std::string s1, std::string s2,
				std::ifstream &infile, std::ofstream &outfile)
{
	std::string	line;

	while (std::getline(infile, line))
	{
		size_t	pos = 0;

		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			std::string replace = line.substr(0, pos);
			replace.append(s2);
			replace.append(line.substr(pos + s1.length()));
			line = replace;
			pos += s2.length();
		}
		outfile << line << std::endl;
	}
}