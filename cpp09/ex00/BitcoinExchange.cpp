#include "BitcoinExchange.hpp"


// CONSTRUCTORS AND DESTRUCTORS-------------------------------------------------
BitcoinExchange::BitcoinExchange(void){}

BitcoinExchange::BitcoinExchange(BitcoinExchange const& other)
{
	*this = other;
}

BitcoinExchange::~BitcoinExchange(void){}

// OPERATORS--------------------------------------------------------------------
BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const& other)
{
	if (this == &other)
		return (*this);
	// DO THINGS
	return (*this);
}

// METHODS AND MEMBER FUNCTIONS-------------------------------------------------

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
	date.year = std::atoi(line.c_str());
	date.month = std::atoi(line.substr(5, 2).c_str());
	date.day = std::atoi(line.substr(8, 2).c_str());
}


/* 
Esta funcion tiene que cambiar el valor de date al día más cercano que encuentre
También debe cambiar el valor de result al valor correspondiente de ese día en la base de datos
 */
void	BitcoinExchange::find_exchange(std::string &date, double &result)
{
	_dict::iterator	it;

	it = _change.find(date);
	while (it == _change.end())
	{
   		it = _change.lower_bound(date); // Encuentra el primer elemento que no es menor que 'date'
    	--it;
		date = it->first;
		it = _change.find(date);
		// get_lower_day(date);
	}
	result = it->second;
}

void	BitcoinExchange::start_convertion(std::string input)
{
	std::string	date;
	size_t		found = 0;
	double		value = 0;
	double		result = 0;

	found = input.find("|");
	if (found == std::string::npos)
		return(BitcoinExchange::print_error("bad input => ", input));
	date = input.substr(0, found - 1);
	// value = atof((input.substr(found + 1)).c_str());
	value = std::strtod((input.substr(found + 1)).c_str(), NULL);
	if (value < 0)
		return(BitcoinExchange::print_error("not a positive number", ""));
	else if (value < INT_MIN || value > INT_MAX)
		return(BitcoinExchange::print_error("too large number", ""));

	//Find exchange:
	find_exchange(date, result);

	// YYYY-MM-DD => 3 = 0.9
	std::cout << std::setprecision(0) << date << " => " << value << " = " ;
	std::cout << std::fixed << std::setprecision(1) << value * result << std::endl;
}

// Principal function
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
		ft_strtrim(input);
		start_convertion(input);
	}
}
