#include "PmergeMe.hpp"
#include <algorithm>
#include <cctype>
#include <climits>
#include <iostream>
#include <iterator>
#include <stdio.h>

std::list<long> PmergeMe::ford_jhonson_list(void)
{
	long	last_value;

	std::list<std::pair<long, long> > pairs;
	std::list<long> result;
	last_value = -1;
	// 1.- make and sort pairs
	make_and_sort_pairs_list(pairs, last_value);

	// 2.- Recursive algorithm
	std::cout << "Pairs (list): \n";
	for (std::list<std::pair<long, long> > ::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		std::cout << "["<< it->first  << ", " << it->second << "]" ;
	}
	std::cout << "\n";
	recursive_sort_list(pairs);
	std::cout << "Pairs (list): \n";
	for (std::list<std::pair<long, long> > ::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		std::cout << "["<< it->first  << ", " << it->second << "]" ;
	}
	std::cout << "\n";
	

	// 3.- Insert order
	std::list<std::pair<long, long> >::iterator it = pairs.begin();
	for (; it != pairs.end(); it++)
	{
		result.push_back(it->second);
	}

	// 4.- Insert at the start of S the element that was paired with the first and smallest element of S
	std::list<std::pair<long, long> >::iterator it_pairs = pairs.begin();
	result.insert(result.begin(), it_pairs->first);

	std::cout << YELLOW "result (list): ";
	print_array(result, YELLOW);

	// 5.- Last insert
	last_insertion_list(last_value, pairs, result);
	return (result);
}


std::vector<long> PmergeMe::ford_jhonson_vector(void)
{
	long	last_value;

	std::vector<std::pair<long, long> > pairs;
	std::vector<long> result;
	last_value = -1;
	// 1.- make and sort pairs
	make_and_sort_pairs_vector(pairs, last_value);

	// 2.- Recursive algorithm
	std::cout << "Pairs (vector): \n";
	for (std::vector<std::pair<long, long> > ::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		std::cout << "["<< it->first  << ", " << it->second << "]" ;
	}
	recursive_sort_vector(pairs);
	std::cout << "\nPairs (vector): \n";
	for (std::vector<std::pair<long, long> > ::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		std::cout << "["<< it->first  << ", " << it->second << "]" ;
	}
	std::cout << "\n";
	

	// 3.- Insert order
	for (size_t i = 0; i < pairs.size(); i++)
	{
		result.push_back(pairs[i].second);
	}

	// 4.- Insert at the start of S the element that was paired with the first and smallest element of S
	result.insert(result.begin(), pairs[0].first);

	std::cout << YELLOW "result (vector): ";
	print_array(result, YELLOW);

	// 5.- Last insert
	last_insertion_vector(last_value, pairs, result);
	return (result);
}
