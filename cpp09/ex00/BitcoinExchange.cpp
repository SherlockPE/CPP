#include "BitcoinExchange.hpp"
#include <iostream>

// CONSTRUCTORS AND DESTRUCTORS-------------------------------------------------
BitcoinExchange::BitcoinExchange(char *input_file_name)
{
	std::cout << GREEN "BitcoinExchange constructor called" NC << std::endl;

	std::ifstream	_data_base_file;
	std::ifstream	_input_file;

	// INPUT FILE OPENING
	_input_file.open(input_file_name);
	if (!_input_file.is_open())
		throw (openFail(input_file_name));

	// DATA BASE FILE OPENING
	_data_base_file.open("data.csv");
	if (!_data_base_file.is_open())
		throw (openFail("data.csv"));

	// GET CONTENT
	// while (std::getline(_data_base_file,  this->_data_base, '\0'))
	// {
		
	// }
	// std::getline(_data_base_file,  this->_data_base, '\0');

	std::getline(_input_file,  this->_input, '\0');
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
void	BitcoinExchange::print_database(void)
{
	std::cout << CYAN << _data_base << NC << std::endl;
}
void	BitcoinExchange::print_input_file(void)
{
	std::cout << WHITE << _input << NC << std::endl;
}