#include "BitcoinExchange.hpp"
#include <iostream>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <climits>

// CONSTRUCTORS AND DESTRUCTORS-------------------------------------------------
BitcoinExchange::BitcoinExchange(void)
{
	std::cout << GREEN "BitcoinExchange constructor called" NC << std::endl;
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

// bool	check_header(std::string	all_line)
// {
// 	size_t	pos;

// 	pos = all_line.find("|");

// 	if (std::find(all_line.begin(), all_line.end(), "date") == all_line.end())
// 		return (false);

// 	if (std::find(all_line.begin() + pos, all_line.end(), "value") == all_line.end())
// 		return (false);
// 	return (true);
// }

// void	check_date(std::string &date)
// {
// 	size_t	found;

// 	found = date.find()
// }

void	get_values(std::string all_line, std::string &date, std::string &change)
{
	size_t	found;

	found = all_line.find(",");
	if (found == std::string::npos)
	{
		date = "";
		change = "";
		return ;
	}
	date = all_line.substr(0, found);
	// check_date(date);
	change = all_line.substr(found + 1);
	// check_change(change);
}

void	BitcoinExchange::print_change_dict(void)
{
	_dict::iterator it;
	for (it = _change.begin(); it != _change.end(); it++)
	{
		std::cout << GREEN << "[" << it->first << "]" <<  NC << std::setprecision(6) << CYAN << "[" << it->second << "]" <<  NC << std::endl;
		// std::cout << std::setprecision(6) << it->first << "," << it->second << std::endl;
	}
}


// Private function:
void	BitcoinExchange::extract_data_base(std::ifstream &archive)
{
	std::string	all_line;
	std::string	date;
	std::string	change;
	size_t		i = -1;

	while (std::getline(archive, all_line))
	{
		i++;
		if (i == 0)
			continue;
		get_values(all_line, date, change);
		std::cout << "Inserting: " << date << "," << change << std::endl;
		_change.insert(std::make_pair(date, std::atof(change.c_str())));
	}
}

// Public function:
void BitcoinExchange::open_files(const char *input, const char * data_base)
{
	std::ifstream	_data_base_file;

	// INPUT FILE OPENING
	_input_file.open(input);
	if (!_input_file.is_open())
		throw (ErrorException("Fail to open the input file"));

	// DATA BASE FILE OPENING
	_data_base_file.open(data_base);
	if (!_data_base_file.is_open())
		throw (ErrorException("Fail to open the data base file"));

	// Extract information
	extract_data_base(_data_base_file);
	print_change_dict();
}

void	start_convertion(std::string input)
{
	std::string	date;
	size_t	found;
	double		change;

	found = input.find("|");
	if (found == std::string::npos)
	{
		std::cout << "Error: bad input => " << input << std::endl;
		return ;
	}
	date = input.substr(0, found);
	change = atof((input.substr(found + 1)).c_str());
	if (change < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return ;
	}
	else if (change < INT_MIN || change > INT_MAX)
	{
		std::cout << "Error: too large number." << std::endl;
		return ;
	}

	std::cout << WHITE "[" << input << ", " << change << "]" << std::endl;
}

void	BitcoinExchange::start_change(void)
{
	std::string input;
	size_t		i;

	i = -1;
	while (std::getline(_input_file, input))
	{
		i++;
		if (i == 0)
			continue;
		start_convertion(input);
	}
}

// void	BitcoinExchange::print_database(void)
// {
// 	std::cout << CYAN << _data_base << NC << std::endl;
// }
// void	BitcoinExchange::print_input_file(void)
// {
// 	std::cout << WHITE << _input << NC << std::endl;
// }