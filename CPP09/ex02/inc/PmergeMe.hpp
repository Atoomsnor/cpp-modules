#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <deque>

template <typename Container>
int		parseToCountainer(int argc, char *argv[], Container &out);

template <typename Container>
void	printContainer(const std::string &label, const Container &container);

int		PmergeMe(int argc, char **argv);

void	sortVectorWithFordJohnson(std::vector<int> &vec);
void	sortDequeWithFordJohnson(std::deque<int> &deq);


#include "PmergeMe.tpp"