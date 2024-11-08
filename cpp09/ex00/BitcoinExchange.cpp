#include "BitcoinExchange.hpp"
#include <iostream>

// CONSTRUCTORS AND DESTRUCTORS-------------------------------------------------
BitcoinExchange::BitcoinExchange(char *input_file_name)
{
	std::cout << GREEN "BitcoinExchange constructor called" NC << std::endl;

	// DATA FILE OPENING
	_data_file_name = "data.csv";

	// INPUT FILE OPENING
	_input_file.open(input_file_name);
	if (!_input_file.is_open())
		throw (openFail("Error: could not open the file ", input_file_name));
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const& other)
{
	std::cout << GREEN "BitcoinExchange copy constructor called" NC << std::endl;
	*this = other;
}

BitcoinExchange::~BitcoinExchange(void)
{
	std::cout << RED "BitcoinExchange destructor called" NC << std::endl;
}

// OPERATORS--------------------------------------------------------------------
BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const& other)
{
	if (this == &other)
		return (*this);
	// DO THINGS
	return (*this);
}

// METHODS AND MEMBER FUNCTIONS-------------------------------------------------
