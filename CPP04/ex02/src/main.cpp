/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:13:44 by roversch          #+#    #+#             */
/*   Updated: 2026/01/22 16:05:49 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	// Animal animal; // abstract showcase

	std::cout << "------- CREATE ANIMAL ARRAY -------" << std::endl;
	Animal* animals[4]
	{
		new Dog, new Dog, new Cat, new Cat
	};

	std::cout << "\n------- DELETE ANIMAL ARRAY -------" << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];

	std::cout << "\n------- CAT -------" << std::endl;
	Cat* cat = new Cat();
	cat->setIdea(0, "eat");
	cat->setIdea(1, "sleep");
	std::cout << "cat ideas: " << cat->getIdea(0) << ", " << cat->getIdea(1) << std::endl;

	std::cout << "\n------- CAT COPY -------" << std::endl;
	Cat* whiteCat = new Cat(*cat);
	whiteCat->setIdea(1, "play");
	std::cout << "whiteCat ideas: " << whiteCat->getIdea(0) << ", " << whiteCat->getIdea(1) << std::endl;
	std::cout << "cat ideas after whiteCat modified: " << cat->getIdea(0) << ", " << cat->getIdea(1) << std::endl;

	std::cout << "\n------- CAT OVERLOAD -------" << std::endl;
	Cat* brownCat = new Cat();
	*brownCat = *cat;
	brownCat->setIdea(0, "hunt");
	std::cout << "brownCat ideas: " << brownCat->getIdea(0) << ", " << brownCat->getIdea(1) << std::endl;
	std::cout << "cat ideas after brownCat modified: " << cat->getIdea(0) << ", " << cat->getIdea(1) << std::endl;

	std::cout << "\n------- CAT DELETE -------" << std::endl;
	delete cat;
	delete brownCat;
	delete whiteCat;

	return 0;
}