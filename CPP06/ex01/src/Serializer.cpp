/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 13:02:53 by roversch          #+#    #+#             */
/*   Updated: 2026/02/23 15:48:39 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	Data*	a = new Data();
	a->string = "yer";
	std::cout << "Address before: " << a << " | String before: " << a->string << std::endl;
	uintptr_t	b = Serializer::serialize(a);
	std::cout << "Serialized value: " << b << std::endl;
	Data*	c = Serializer::deserialize(b);
	std::cout << "Address after: " << c << " | String after: " << c->string << std::endl;
}