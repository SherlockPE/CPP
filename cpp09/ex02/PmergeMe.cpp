#include "PmergeMe.hpp"
#include <iostream>

// CONSTRUCTORS AND DESTRUCTORS-------------------------------------------------
PmergeMe::PmergeMe(void){}

PmergeMe::PmergeMe(std::string args)
{
	for (size_t i = 0; args[i]; i++)
	{
		std::string numbers("0123456789");
		if (numbers.find(args[i]) == std::string::npos)
			throw ();

	}
}

PmergeMe::PmergeMe(PmergeMe const& other)
{
	std::cout << GREEN "PmergeMe copy constructor called" NC << std::endl;
	*this = other;
}

PmergeMe::~PmergeMe(void)
{
	std::cout << RED "PmergeMe destructor called" NC << std::endl;
}

// OPERATORS--------------------------------------------------------------------
PmergeMe& PmergeMe::operator=(PmergeMe const& other)
{
	if (this == &other)
		return (*this);
	// DO THINGS
	return (*this);
}

// METHODS AND MEMBER FUNCTIONS-------------------------------------------------

int	PmergeMe::print_error(std::string msg)
{
	std::cout << "Error: " << msg << std::endl;
	return (EXIT_FAILURE);
}
