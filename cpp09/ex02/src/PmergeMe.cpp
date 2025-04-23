#include "PmergeMe.hpp"
#include <cctype>
#include <climits>
#include <iostream>
#include <iterator>
#include <stdio.h>

// CONSTRUCTORS AND DESTRUCTORS-------------------------------------------------
PmergeMe::PmergeMe(void)
{
}

PmergeMe::PmergeMe(PmergeMe const &other)
{
	std::cout << GREEN "PmergeMe copy constructor called" NC << std::endl;
	*this = other;
}

PmergeMe::~PmergeMe(void)
{
}

// OPERATORS--------------------------------------------------------------------
PmergeMe &PmergeMe::operator=(PmergeMe const &other)
{
	if (this == &other)
		return (*this);
	// DO THINGS
	return (*this);
}

// METHODS AND MEMBER FUNCTIONS-------------------------------------------------

// Utils
int PmergeMe::print_error(std::string msg)
{
	std::cout << RED << "Error: " << msg << NC << std::endl;
	return (EXIT_FAILURE);
}

void PmergeMe::parse(std::stringstream &arr)
{
	long	number;

	while (arr >> number)
	{
		if (number < 0)
			throw(PmergeError("Error:  not a valid input"));
		if (number < INT_MIN || number > INT_MAX)
			throw(PmergeError("Error:  not a valid input"));
		_array.push_back(number);
		_list.push_back(number);
	}
	if (!arr.eof())
		throw(PmergeError("Error: not a valid input!"));
}

void PmergeMe::start(std::stringstream &arr)
{
	clock_t	start_vector;
	clock_t	start_list;
	double	final_time_vector;
	double	final_time_list;

	parse(arr);
	print_array(_array, MAGENTA, "Before: ");

	// Inicia el reloj


	/* Algoritmo de ordenamiento */
	// Vector
	start_vector = clock();
	ford_jhonson_vector();
	final_time_vector = clock() - start_vector;
	// List
	start_list = clock();
	ford_jhonson_list();
	final_time_list = clock() - start_list;

	// Imprimir contenedor ordenado
	print_array(_array, GREEN, "After (vector): ");
	print_array(_list, GREEN, "After (list): ");

	// Imprimir tiempo de ejecución
	std::cout << "Time to process a range of " << _array.size() << " with [std::vector] :  " << final_time_vector << " ms" << std::endl;
	std::cout << "Time to process a range of " << _list.size() << " with [std::list] :  " << final_time_list << " ms" << std::endl;
	std::cout << NC << std::endl;
}
