/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:08:16 by roversch          #+#    #+#             */
/*   Updated: 2026/02/26 19:11:53 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>
#include <vector>
#include <deque>
#include <list>

int	main()
{
	std::array<int, 5> arr = {1, 2, 3, 4, 5};
	std::vector<int> vec = {1, 2, 3, 4, 5};
	std::deque<int> deq = {1, 2, 3, 4, 5};
	std::list<int> lst = {1, 2, 3, 4, 5};

	std :: cout << PURPLE << "--array--" << std::endl;
	try {
		::easyfind(arr, 3);
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		::easyfind(arr, 6); // element doesn't exist
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std :: cout << GREEN << "--vector--" << std::endl;
	try {
		::easyfind(vec, 6);
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	vec.push_back(6); // vector can grow dynamically
	try {
		::easyfind(vec, 6);
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std :: cout << PINK << "--deque--" << std::endl;
	try {
		::easyfind(deq, 0);
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	deq.push_front(0); // deque supports front insertion
	try {
		::easyfind(deq, 0);
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std :: cout << BLUE << "--lst--" << std::endl;
	try {
		::easyfind(lst, 3);
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	lst.remove(3); // list allows for center removal
	try {
		::easyfind(lst, 3);
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}