/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:13:44 by roversch          #+#    #+#             */
/*   Updated: 2026/02/06 13:07:42 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	std::cout << "----- CREATE ANIMAL ARRAY -----" << std::endl;
	Animal* animals[4]
	{
		new Dog, new Dog, new Cat, new Cat
	};

	std::cout << "\n----- DELETE ANIMAL ARRAY -----" << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];

	std::cout << "\n----- CAT -----" << std::endl;
	Cat* cat = new Cat();
	cat->setIdea(0, "eat");
	cat->setIdea(1, "sleep");
	std::cout << "cat ideas: " << cat->getIdea(0) << ", " << cat->getIdea(1) << std::endl;

	std::cout << "\n----- CAT COPY -----" << std::endl;
	Cat* spook = new Cat(*cat);
	spook->setIdea(1, "murder");
	std::cout << "spook ideas: " << spook->getIdea(0) << ", " << spook->getIdea(1) << std::endl;
	std::cout << "cat ideas after spook modified: " << cat->getIdea(0) << ", " << cat->getIdea(1) << std::endl;

	std::cout << "\n----- CAT OVERLOAD -----" << std::endl;
	Cat* fluff = new Cat();
	*fluff = *cat;
	fluff->setIdea(0, "prowl");
	std::cout << "fluff ideas: " << fluff->getIdea(0) << ", " << fluff->getIdea(1) << std::endl;
	std::cout << "cat ideas after fluff modified: " << cat->getIdea(0) << ", " << cat->getIdea(1) << std::endl;

	std::cout << "\n----- CAT DELETE -----" << std::endl;
	delete cat;
	delete spook;
	delete fluff;

	return 0;
}