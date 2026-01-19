/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:13:44 by roversch          #+#    #+#             */
/*   Updated: 2026/01/19 16:47:41 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* a[4]
	{
		new Dog, new Dog, new Cat, new Cat
	};

	for (int i = 0; i < 4; i++)
		delete a[i];

	// const Animal* meta = new Animal();
	// std::cout << "\n";
	// const Animal* j = new Dog();
	// std::cout << "\n";
	// const Animal* i = new Cat();
	// std::cout << "\n";
	// const WrongAnimal* beta = new WrongAnimal();
	// std::cout << "\n";
	// const WrongAnimal* k = new WrongCat();
	
	// std::cout << "-----" << std::endl;
	// std::cout << meta->getType() << " " << std::endl;
	// meta->makeSound();
	// std::cout << j->getType() << " " << std::endl;
	// j->makeSound();
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// std::cout << beta->getType() << " " << std::endl;
	// beta->makeSound();
	// std::cout << k->getType() << " " << std::endl;
	// k->makeSound();
	// std::cout << "-----" << std::endl;

	// delete meta;
	// std::cout << "\n";
	// delete i;
	// std::cout << "\n";
	// delete j;
	// std::cout << "\n";
	// delete beta;
	// std::cout << "\n";
	// delete k;

	return (0);
}