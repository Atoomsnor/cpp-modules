#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <deque>

template <typename Container>
int	parseToCountainer(int argc, char *argv[], Container &out);

template <typename Container>
void	printContainer(const std::string &label, const Container &container);

void	runVector(std::vector<int> &vectorContainer);
// void	runDeque(std::deque<int> &dequeContainer);

void	makeVecPairs(std::vector<int> &list, std::vector<int> &winners, std::vector<int> &losers);


#include "PmergeMe.tpp"