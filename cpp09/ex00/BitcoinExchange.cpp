#include "BitcoinExchange.hpp"
#include <iostream>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <climits>
# include <iostream>

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

BitcoinExchange::BitcoinExchange(const char *input, const char * data_base)
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
	print_database();
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

// UTILSS - PRINT
void	BitcoinExchange::print_database(void)
{
	_dict::iterator it;
	for (it = _data_base.begin(); it != _data_base.end(); it++)
	{
		std::cout << GREEN << "[" //PRINT THE STRUCTURE
			<< it->first.year << ", "
			<< it->first.month << ", "
			<< it->first.day << "]" << NC
			<< std::setprecision(6) << CYAN << "[" //PRINT THE VALUE
			<< it->second 
			<< "]" <<  NC << std::endl;
	}
}

// UTILSS - PRINT
void	print_error(std::string msg)
{
	std::cout << RED "Error: " << msg << "." NC << std::endl;
}

// UTILSS - EXTRACT ARCHIVE DATA.CSV
/* 
	Line's variable gonna be something like "2022-12-17"

	At the end of the function the structure 'date' gonna be full like this:
		-date.year 2022
		-date.mont 12
		-date.day 17
 */
void	get_struct_value(std::string line, t_data &date)
{
	int i = 0;
	std::size_t found;
	std::size_t found_temp;

	found_temp = 0;
	found = line.find_first_of("-");
	while (found!=std::string::npos)
	{
		if (i == 0)
			date.year = std::atoi(line.substr(found_temp, found).c_str());
		else if (i == 1)
			date.month = std::atoi(line.substr(found_temp + 1, found - found_temp - 1).c_str());
		else
			break;
		found_temp = found;
		found= line.find_first_of("-", found+1);
		i++;
	}
	date.day = std::atoi(line.substr(found_temp + 1, found).c_str());
}

// UTILSS - EXTRACT ARCHIVE DATA.CSV
/* 
	line's variable gonna be something like "2022-12-17, 42"

	At the end of the function the structure 'date' gonna be full
	And the 'change' variable gonna  be full like this:
		-change = 42
 */
void	get_values(std::string line, t_data &date, double &change)
{
	size_t		found;
	std::string	date_line;

	found = line.find(",");
	if (found == std::string::npos)
	{
		change = 0;
		return ;
	}
	// Obtener el valor en double del cambio
	change = std::atof(line.substr(found + 1).c_str());

	// Obtener el valor en string de date;
	date_line = line.substr(0, found);

	// Pasarlo a la estructura
	get_struct_value(date_line, date);
}

// UTILSS - EXTRACT ARCHIVE DATA.CSV
/* 
	line's variable gonna be something like "2022-12-17, 42"

	At the end of the function the map container '_data_base'
	gonna be fulled with the contents of the data.csv archive

	Like this:
		_data_base[struct] = value;
 */
void	BitcoinExchange::extract_data_base(std::ifstream &archive)
{
	std::string	all_line;
	t_data		date;
	double		change;
	size_t		i = -1;

	while (std::getline(archive, all_line))
	{
		i++;
		if (i == 0)
			continue;
		get_values(all_line, date, change);
		_data_base.insert(std::make_pair(date, change));
	}
}

// // Public function:
// void BitcoinExchange::open_files(const char *input, const char * data_base)
// {

// }


// void	start_convertion(std::string input)
// {
// 	std::string	date;
// 	size_t	found;
// 	double		change;

// 	found = input.find("|");
// 	if (found == std::string::npos)
// 	{
// 		std::cout << "Error: bad input => " << input << std::endl;
// 		return ;
// 	}
// 	date = input.substr(0, found - 1);
// 	change = atof((input.substr(found + 1)).c_str());
// 	if (change < 0)
// 		return(print_error("not a positive number"));
// 	else if (change < INT_MIN || change > INT_MAX)
// 		return(print_error("too large number"));
// 	std::cout << "[" << date << ", " << change << "]" << std::endl;
// }


// // Principal function
// void	BitcoinExchange::start_change(void)
// {
// 	std::string input;
// 	size_t		i;

// 	i = -1;
// 	while (std::getline(_input_file, input))
// 	{
// 		i++;
// 		if (i == 0)
// 			continue;
// 		start_convertion(input);
// 	}
// }

// void	BitcoinExchange::print_database(void)
// {
// 	std::cout << CYAN << _data_base << NC << std::endl;
// }
// void	BitcoinExchange::print_input_file(void)
// {
// 	std::cout << WHITE << _input << NC << std::endl;
// }