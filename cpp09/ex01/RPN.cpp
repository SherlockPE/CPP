#include "RPN.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <cstddef>
#include <algorithm>

// CONSTRUCTORS AND DESTRUCTORS-------------------------------------------------
RPN::RPN(void){}

RPN::RPN(RPN const& other)
{
	std::cout << GREEN "RPN copy constructor called" NC << std::endl;
	*this = other;
}

RPN::~RPN(void) {}

// OPERATORS--------------------------------------------------------------------
RPN& RPN::operator=(RPN const& other)
{
	if (this == &other)
		return (*this);
	// DO THINGS
	return (*this);
}

// METHODS AND MEMBER FUNCTIONS-------------------------------------------------
int	RPN::print_error(std::string msg)
{
	std::cout << RED << "Error: " << msg << NC << std::endl;
	return (EXIT_FAILURE);
}


void	RPN::init(std::string args)
{
	std::ostringstream	buffer;
	size_t				pos = 0;
	size_t				cant = 0;
	size_t				num_operators = 0;
	std::string 		valid_chars("0123456789-+*/");


	pos = args.find_first_not_of(' ');
	if (pos == std::string::npos)
		throw (PolishError("Invalid input"));

	while (pos != std::string::npos)
	{
		if (pos + 1 < args.size() && args[pos + 1] != ' ')
			throw (PolishError("Invalid input"));

		// Comprobar que el caracter actual sea válido:
		if (std::find(valid_chars.begin(), valid_chars.end(), args[pos]) == args.end())
			throw (PolishError("Invalid input"));

		buffer << args[pos];
		cant++;

		if (pos >= args.size())
			break;

		pos = args.find_first_not_of(' ', pos + 1);
	}
	this->_storage = buffer.str();

	// Terminado 
	if (cant <= 2 || (!std::isdigit(_storage[0]) || !std::isdigit(_storage[1])) || std::isdigit(_storage[_storage.size() - 1]))
		throw (PolishError("Invalid input"));

	num_operators += std::count(args.begin(), args.end(), '+');
	num_operators += std::count(args.begin(), args.end(), '-');
	num_operators += std::count(args.begin(), args.end(), '*');
	num_operators += std::count(args.begin(), args.end(), '/');

	if (num_operators != (_storage.size() - num_operators) - 1)
		throw (PolishError("Invalid input op"));
}