#include "PmergeMe.hpp"
#include <iostream>

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
// [0 2 -2     4   21  54]
void		PmergeMe::insert(std::string input)
{
	size_t		pos = 0;
	size_t		next_pos = 0;
	std::string	valid("0123456789-+");

	// std::cout << "Input --> [" << input << "]" << std::endl;
	pos = input.find_first_not_of(' ');
	while (pos != std::string::npos)
	{
		next_pos = input.find_first_of(' ', pos);
		if (next_pos == std::string::npos)
			next_pos = input.size();

		if (next_pos - pos > 10)
		{
			std::cout << " no se 1 " << std::endl;
				return ;
		}

		for (size_t i = pos; i < next_pos; i++)
		{
			if (valid.find(input[i]) == std::string::npos)
				throw (PmergeError("Error: Not valid Arguments\n"));
		}

		std::cout << "pos: " << pos << " | next pos: " << next_pos << std::endl;
		std::cout << GREEN "Adding --> [" << std::strtol(input.substr(pos, next_pos).c_str(), NULL, 10) << "]" << NC << std::endl;
		pos = input.find_first_not_of(' ', next_pos + 1);
	}
}