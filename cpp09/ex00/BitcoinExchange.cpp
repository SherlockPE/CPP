#include "BitcoinExchange.hpp"
#include <iostream>

void	BitcoinExchange::get_content(std::string src, std::string &key, std::string &value)
{
	int	exist = 0;
	size_t i = 0;

	while (i < src.length())
	{
		if (src[i] == ',')
		{
			exist = 1;
			break;
		}
		i++;
	}
	if (!exist)
		key = RED "Missing" NC;
	else
		key = src.substr(0, 10);
	
	exist = 0;
	size_t a = i;
	while (i < src.length())
	{
		if (src[i] == '\n' || src[i] == '\0')
		{
			exist = 1;
			break;
		}
		i++;
	}
	if (!exist)
		value = "Missing";
	else
		value = src.substr(a + 1, src.length());
}

// CONSTRUCTORS AND DESTRUCTORS-------------------------------------------------
BitcoinExchange::BitcoinExchange(char *input_file_name)
{
	std::cout << GREEN "BitcoinExchange constructor called" NC << std::endl;

	std::ifstream	_data_base_file;
	std::ifstream	_input_file;
	std::string		key;
	std::string		value;

	// INPUT FILE OPENING
	_input_file.open(input_file_name);
	if (!_input_file.is_open())
		throw (openFail(input_file_name));

	// DATA BASE FILE OPENING
	_data_base_file.open("data.csv");
	if (!_data_base_file.is_open())
		throw (openFail("data.csv"));

	// GET CONTENT
	while (std::getline(_data_base_file,  this->_data_base, '\n'))
	{
		get_content(this->_data_base, key, value);
		std::cout << GREEN << this->_data_base << NC << std::endl;
		std::cout << YELLOW << "KEY: " << key << NC << std::endl;
		std::cout << YELLOW << "Value: " << value << NC << std::endl;
	}
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