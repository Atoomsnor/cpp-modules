/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:11:25 by roversch          #+#    #+#             */
/*   Updated: 2025/12/23 17:01:15 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4 || argv[2][0] == '\0')
		return (std::cout << "Invalid arguments :c" << std::endl, 1);

	std::ifstream	infile;
	infile.open(argv[1], std::ifstream::in);
	if (!infile)
		return (std::cout << "Invalid infile :c" << std::endl, 1);
	std::string	out = argv[1];
	out.append(".replace");
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	std::ofstream	outfile(out);

	replace(s1, s2, infile, outfile);
}