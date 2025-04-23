#include "PmergeMe.hpp"
#include <algorithm>
#include <cctype>
#include <climits>
#include <iostream>
#include <iterator>
#include <stdio.h>

void	PmergeMe::ford_jhonson_list(void)
{
	if (_list.size() < 2)
		return;

	std::list<std::pair<long, long> >	pairs;
	std::list<long> 					result;
	long								last_value = -1;
	// 1.- make and sort pairs
	make_and_sort_pairs_list(pairs, last_value);

	// 2.- Recursive algorithm
	print_pairs(pairs, WHITE, "Pairs (list) before rec_s_list: \n");
	recursive_sort_list(pairs);
	print_pairs(pairs, WHITE, "Pairs (list) after rec_s_list: \n");



	// 3.- Insert order
	std::list<std::pair<long, long> >::iterator it = pairs.begin();
	for (; it != pairs.end(); it++)
		result.push_back(it->second);

	// 4.- Insert at the start of S the element that was paired with the first and smallest element of S
	std::list<std::pair<long, long> >::iterator it_pairs = pairs.begin();
	result.insert(result.begin(), it_pairs->first);

	// 5.- Last insert
	last_insertion_list(last_value, pairs, result);

	_list.clear();
	_list = result;
}


void	PmergeMe::ford_jhonson_vector(void)
{
	if (_array.size() < 2)
		return;

	std::vector<std::pair<long, long> >	pairs;
	std::vector<long>					result;
	long								last_value = -1;

	// 1.- make and sort pairs
	make_and_sort_pairs_vector(pairs, last_value);

	// 2.- Recursive algorithm
	// print_pairs(pairs, WHITE, "Pairs (vector) before rec_s_list: \n");
	recursive_sort_vector(pairs);
	// print_pairs(pairs, WHITE, "Pairs (vector) after rec_s_list: \n");

	

	// 3.- Insert order
	for (size_t i = 0; i < pairs.size(); i++)
	{
		result.push_back(pairs[i].second);
	}

	// 4.- Insert at the start of S the element that was paired with the first and smallest element of S
	result.insert(result.begin(), pairs[0].first);

	// 5.- Last insert
	last_insertion_vector(last_value, pairs, result);

	_array.clear();
	_array = result;
}
