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
	std::vector<long> result_vector;
	std::list<long> result_list;

	parse(arr);
	print_array(_array, MAGENTA, "Before: ");

	// Inicia el reloj
	start_vector = clock();
	start_list = clock();

	// Algoritmo de ordenamiento
	result_vector = ford_jhonson_vector();
	final_time_vector = clock() - start_vector;
	result_list = ford_jhonson_list();
	final_time_list = clock() - start_list;

	// Imprimir contenedor ordenado
	print_array(result_vector, GREEN, "After (vector): ");
	print_array(result_list, GREEN, "After (list): ");

	// Imprimir tiempo de ejecución
	std::cout << "Time to process a range of " << result_vector.size() << " with [std::vector] :  " << final_time_vector << " ms" << std::endl;
	std::cout << "Time to process a range of " << result_list.size() << " with [std::list] :  " << final_time_list << " ms" << std::endl;
	std::cout << NC << std::endl;
}
