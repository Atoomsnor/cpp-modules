/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:13:44 by roversch          #+#    #+#             */
/*   Updated: 2026/01/22 16:09:11 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* alpha = new Animal();
	std::cout << "\n";
	const Animal* dog_a = new Dog();
	std::cout << "\n";
	const Animal* cat_a = new Cat();
	std::cout << "\n";
	const WrongAnimal* beta = new WrongAnimal();
	std::cout << "\n";
	const WrongAnimal* cat_b = new WrongCat();
	
	std::cout << "-----" << std::endl;
	std::cout << alpha->getType() << " " << std::endl;
	alpha->makeSound();
	std::cout << dog_a->getType() << " " << std::endl;
	dog_a->makeSound();
	std::cout << cat_a->getType() << " " << std::endl;
	cat_a->makeSound();
	std::cout << beta->getType() << " " << std::endl;
	beta->makeSound();
	std::cout << cat_b->getType() << " " << std::endl;
	cat_b->makeSound();
	std::cout << "-----" << std::endl;

	delete alpha;
	std::cout << "\n";
	delete cat_a;
	std::cout << "\n";
	delete dog_a;
	std::cout << "\n";
	delete beta;
	std::cout << "\n";
	delete cat_b;

	return (0);
}