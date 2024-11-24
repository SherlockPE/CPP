#include "BitcoinExchange.hpp"
#include <string>
#include <sstream> 

void	BitcoinExchange::print_error(std::string msg1, std::string msg2)
{
	std::cout << RED "Error: " << msg1 << msg2 << NC << std::endl;
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

void	BitcoinExchange::ft_strtrim(std::string &str)
{
	while (str[0] == ' ')
		str.erase(str.begin());
	while (str[str.size() - 1] == ' ')
		str.resize(str.size() - 1);
}

std::string	BitcoinExchange::pass_days_to_str(t_data &date)
{
    std::ostringstream oss;

    oss << date.year << "-" << date.month << "-" << date.day;
    return oss.str();
}

int BitcoinExchange::parse_digit(std::string str)
{
	size_t cant_point = 0;
	size_t cant_plus = 0;
	size_t cant_minus = 0;

	for (size_t i = 0; str[i]; i++) {
		if (str[i] == '.')
			cant_point++, i++;
		if (cant_point > 0 && i == 1)
			return (EXIT_FAILURE);
		if (str[i] == '+')
			cant_plus++, i++;
		if (str[i] == '-')
			cant_minus++, i++;
		if (cant_point > 1 || cant_plus > 1 || cant_minus > 1)
			return (EXIT_FAILURE);
		if (!std::isdigit(str[i]))
			return  (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}


// Un año es bisiesto si es divisible entre 4, pero no entre 100, excepto si también es divisible entre 400.
int BitcoinExchange::is_leap_year(int year)
{
	if ((year % 4) == 0 && (year % 100 != 0 || (year % 400 == 0)))
		return (1);
	return (0);
}

// UTILSS - EXTRACT ARCHIVE DATA.CSV
/* 
	Line's variable gonna be something like "2022-12-17"

	At the end of the function the structure 'date' gonna be full like this:
		-date.year 2022
		-date.mont 12
		-date.day 17
 */
int	BitcoinExchange::get_struct_value(std::string line)
{
	t_data date;

	date.year = std::atoi(line.c_str());
	date.month = std::atoi(line.substr(5, 2).c_str());
	date.day = std::atoi(line.substr(8, 2).c_str());

	// Parseo normalito
	int	daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	// If the year is leap... (bisiesto)
	if (is_leap_year(date.year))
		daysInMonth[2] = 29;

	if (date.year <= 0 || date.month <= 0 || date.day <= 0 
		|| date.month > 12 || date.day > daysInMonth[date.month])
		return (EXIT_FAILURE);

	// Si me pasan un número menor al que existe en la base de datos ...
	if (line < _change.begin()->first )
	{
		std::cout << RED << "Error: Date too lower (not found in database): " << line << " | ";
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}


int	BitcoinExchange::validate_date(std::string &date)
{
	if ((date.length() != 10 || date[4] != '-' || date[7] != '-') 
		|| (std::count(date.begin(), date.end(), '-') != 2)
		|| (std::count_if(date.begin(), date.end(), isdigit) != 8))
		return (EXIT_FAILURE);

	if (get_struct_value(date))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}