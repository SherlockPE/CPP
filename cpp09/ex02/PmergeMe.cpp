#include "PmergeMe.hpp"
#include <iostream>
#include <climits>
#include <stdio.h>
#include <cctype>
#include <algorithm>

// CONSTRUCTORS AND DESTRUCTORS-------------------------------------------------
PmergeMe::PmergeMe(void){}

PmergeMe::PmergeMe(PmergeMe const& other)
{
	std::cout << GREEN "PmergeMe copy constructor called" NC << std::endl;
	*this = other;
}

PmergeMe::~PmergeMe(void){}

// OPERATORS--------------------------------------------------------------------
PmergeMe& PmergeMe::operator=(PmergeMe const& other)
{
	if (this == &other)
		return (*this);
	// DO THINGS
	return (*this);
}

// METHODS AND MEMBER FUNCTIONS-------------------------------------------------

// Utils
int	PmergeMe::print_error(std::string msg)
{
	std::cout << RED << "Error: " << msg << NC << std::endl;
	return (EXIT_FAILURE);
}

void	PmergeMe::parse(std::stringstream &arr)
{
	long number;

	while (arr >> number)
	{
		if (number < 0)
			throw (PmergeError("Error:  not a valid input"));
		if (number < INT_MIN || number > INT_MAX)
			throw (PmergeError("Error:  not a valid input"));
		_array.push_back(number);
		_list.push_back(number);
	}
	if (!arr.eof())
		throw (PmergeError("Error: not a valid input!"));
}

void	PmergeMe::make_and_sort_pairs(std::vector<std::pair<long, long> > &pairs, long &last_value)
{
	if (_array.size() % 2 != 0)
	{
		last_value = _array.back();
		_array.pop_back();
	}
	for (size_t i = 0; i < _array.size(); i += 2)
	{
		if (_array[i] > _array[i + 1])
			pairs.push_back(std::make_pair(_array[i + 1], _array[i]));
		else
			pairs.push_back(std::make_pair(_array[i], _array[i + 1]));
	}
}


void	recursive_sort(std::vector<std::pair<long, long> > &pairs)
{
	if (pairs.size() <= 1)
		return;
	

	std::vector<std::pair<long, long> > first_pair(pairs.begin(), pairs.begin() + pairs.size() / 2);
	std::vector<std::pair<long, long> > second_pair(pairs.begin() + pairs.size() / 2, pairs.end());
	recursive_sort(first_pair);
	recursive_sort(second_pair);

	size_t itf = 0;
	size_t its = 0;
	size_t itp = 0;
	while (itf < first_pair.size() && its < second_pair.size())
	{
		if (first_pair[itf].second > second_pair[its].second)
			pairs[itp] = second_pair[its++];
		else
			pairs[itp] = first_pair[itf++];
		itp++;
	}
	while (itf < first_pair.size() || its < second_pair.size())
	{
		if (itf == first_pair.size())
			pairs[itp] = second_pair[its++];
		else
			pairs[itp] = first_pair[itf++];
		itp++;
	}
}

//  2, 2, 6, 10, 22, 42, ...
long	generate_insertion_order(void)
{
	static long num;
	static int i;

	num *= 2;
	if (i % 2 == 0)
		num += 2;
	else
		num -= 2;
	i++;
	return (num);
}



long	binary_search(std::vector<long> &result, long number)
{
	long position;
	long	size;
	long	half;

	size = result.size() / 2;
	// while (true)
	// {
	// 	half = result[size];
	// 	if (number < half)
	// 	{
	// 		half = result[size / 2];
	// 		if (half > number)
	// 	}
	// }
}

void binary_search_insertion(std::vector<long> & result, std::vector<long> &insertion_order, long last_value)
{
	long position;

	for (size_t i = 0; i < insertion_order.size(); i++)
	{
		position = binary_search(result, insertion_order[i]);

	}
	
}

void	last_insertion(long last_value, std::vector<std::pair<long, long> > &pairs, std::vector<long> &result)
{
	std::vector<std::pair<long, long> >::iterator	it;
	std::vector<long>								group;
	std::vector<long>								insertion_order;
	long											group_size;

	(void)last_value;
	(void)result;
	it = pairs.begin() + 1;
	while (it != pairs.end())
	{
		group_size = generate_insertion_order();
		for (long i = 0; i < group_size && it != pairs.end(); i++)
		{
			group.push_back((*it).first);
			it++;
		}
		std::reverse(group.begin(), group.end());
		insertion_order.insert(insertion_order.end(), group.begin(), group.end());

		std::cout << CYAN << "Insertion order: " ;
		for (size_t i = 0; i < insertion_order.size(); i++)
		{
			std::cout << insertion_order[i] << ", " ;
		}
		std::cout << "\n";
		group.clear();
	}
	binary_search_insertion(result, insertion_order, last_value);
}

void	PmergeMe::ford_jhonson(void)
{
	std::vector<std::pair<long, long> > pairs;
	std::vector<long>					result;
	long last_value = -1;

	// 1.- make and sort pairs 
	make_and_sort_pairs(pairs, last_value);

	std::cout << YELLOW;
	for (size_t i = 0; i < pairs.size(); i++)
	{
		std::cout << "fila: " << i << " [" << pairs[i].first << ", " << pairs[i].second << "]\n";
	}
	// 2.- Recursive algorithm
	recursive_sort(pairs);
	std::cout << MAGENTA;
	for (size_t i = 0; i < pairs.size(); i++)
	{
		std::cout << "fila: " << i << " [" << pairs[i].first << ", " << pairs[i].second << "]\n";
	}

	// 3.- Insert order
	for (size_t i = 0; i < pairs.size(); i++)
	{
		result.push_back(pairs[i].second);
	}
	// 4.- Insert at the start of S {\displaystyle S} the element that was paired with the first and smallest element of S {\displaystyle S}.
	result.insert(result.begin(), pairs[0].first);

	std::cout << YELLOW << "Result :\n" ;
	for (size_t i = 0; i < result.size(); i++)
	{
		std::cout << result[i] << ", ";
	}
	std::cout << std::endl;
	// 5.- Last insert
	last_insertion(last_value, pairs, result);

	// std::cout << last_value;
}

void		PmergeMe::start(std::stringstream &arr)
{
	parse(arr);
	
	std::cout << "Before: " << MAGENTA;
	for (size_t i = 0; i < _array.size(); i++)
		std::cout << _array[i] << " ";
	std::cout << NC << std::endl;

	// Inicia el reloj
	// clock_t	start_vector = clock();
	// clock_t	start_list = clock();

	// Algoritmo de ordenamiento
	ford_jhonson();
	double	final_time_vector = 0;
	double	final_time_list = 0;

	// Imprimir contenedor ordenado
	std::cout << "After : " << GREEN;
	for (size_t i = 0; i < _array.size(); i++)
		std::cout << _array[i] << " ";
	std::cout << NC << std::endl;

	// Imprimir tiempo de ejecución
	std::cout << "Time to process a range of " << _array.size()
		<< " with [std::vector] :  " << final_time_vector << " ms" << std::endl;
	std::cout << "Time to process a range of " << _list.size()
		<< " with [std::list] :  " << final_time_list << " ms" << std::endl;
	std::cout << NC << std::endl;
}
