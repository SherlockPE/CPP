#include "PmergeMe.hpp"
#include <iostream>
#include <climits>
#include <stdio.h>
#include <cctype>

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

void	PmergeMe::ford_jhonson(void)
{
	std::vector	<long>					result;
	std::vector<std::pair<long, long> > pairs;
	std::pair<long, long>				temp;


	long last_value = -1;
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

	// 
	for (size_t i = 0; i < pairs.size(); i++)
	{
		std::cout << "fila: " << i << " [" << pairs[i].first << ", " << pairs[i].second << "]\n";
	}
	
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
