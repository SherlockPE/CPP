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

// Principal
void		PmergeMe::insert(std::string input)
{
	size_t		pos = 0;
	size_t		next_pos = 0;
	std::string	valid("0123456789");

	// std::cout << "Input --> [" << input << "]" << std::endl;
	pos = input.find_first_not_of(' ');
	if (input.empty())
		throw (PmergeError("Error: Empty imput"));
	while (pos != std::string::npos)
	{
		next_pos = input.find_first_of(' ', pos);
		if (next_pos == std::string::npos)
			next_pos = input.size();

		if (next_pos - pos > 10)
			throw (PmergeError("Error: Argument to long"));

		for (size_t i = pos; i < next_pos; i++)
		{
			if (valid.find(input[i]) == std::string::npos)
				throw (PmergeError("Error: Not valid Arguments"));
		}
		std::string value_str =  input.substr(pos, next_pos).c_str();
		long value =  std::strtol(value_str.c_str(), NULL, 10);
		if (value > INT_MAX)
			throw (PmergeError("Error: Argument to long"));
		_array.push_back(value);
		pos = input.find_first_not_of(' ', next_pos + 1);
	}
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

		std::cout << "Numero [" << number << "]" << std::endl;
	}
	if (!arr.eof())
		throw (PmergeError("Error: not a valid input!"));
}

void	PmergeMe::ford_jhonson(void)
{

}

void		PmergeMe::start(std::stringstream &arr)
{
	parse(arr);
	// std::cout << "Before: " << MAGENTA;
	// for (size_t i = 0; i < _array.size(); i++)
	// 	std::cout << _array[i] << " ";
	// std::cout << NC << std::endl;

	// Inicia el reloj
	// clock_t	start_vector = clock();
	// clock_t	start_list = clock();

	// Algoritmo de ordenamiento
	double	final_time_vector = 0;
	double	final_time_list = 0;

	// // Imprimir contenedor ordenado
	// std::cout << "After : " << GREEN;
	// for (size_t i = 0; i < _array.size(); i++)
	// 	std::cout << _array[i] << " ";
	// std::cout << NC << std::endl;

	// Imprimir tiempo de ejecución
	std::cout << "Time to process a range of " << _array.size()
		<< " with [std::vector] :  " << final_time_vector << " ms" << std::endl;
	std::cout << "Time to process a range of " << _list.size()
		<< " with [std::list] :  " << final_time_list << " ms" << std::endl;
	std::cout << NC << std::endl;
}
