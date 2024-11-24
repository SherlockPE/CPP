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

/* 
Esta funcion tiene que cambiar el valor de date al día más cercano que encuentre
También debe cambiar el valor de result al valor correspondiente de ese día en la base de datos
 */
std::string	BitcoinExchange::find_exchange(std::string date, double &result)
{
	_dict::iterator	it;

	it = _change.find(date);
	while (it == _change.end())
	{
   		it = _change.lower_bound(date); // Encuentra el primer elemento que no es menor que 'date'
    	--it;
		date = it->first;
		it = _change.find(date);
	}
	result = it->second;
	return (date);
}

void	BitcoinExchange::start_convertion(std::string input)
{
	std::string	date;
	std::string	date_used;
	std::string	val_money;
	size_t		found = 0;
	double		value = 0;
	double		result = 0;

	// Example --> [2011-01-03 | 3]
	found = input.find("|");
	if (found == std::string::npos)
		return(BitcoinExchange::print_error("bad input => ", input));
	date = input.substr(0, found);
	ft_strtrim(date);

	// Comprobation of a valid date
	if (validate_date(date))
		return(BitcoinExchange::print_error("Invalid date ", date));

	// Comprobation of a valid value
	val_money = input.substr(found + 1);
	ft_strtrim(val_money);
	if (BitcoinExchange::parse_digit(val_money))
		return(BitcoinExchange::print_error("Not valid number: ", val_money));
	value = std::strtod(val_money.c_str(), NULL);

	// In this point:
	// 		date	= 2011-01-03
	//		value	= 3

	if (value < 0)
		return(BitcoinExchange::print_error("not a positive number: ", val_money));
	else if (value < INT_MIN || value > 1000 || value > INT_MAX)
		return(BitcoinExchange::print_error("too large number: ", val_money));


	//Find exchange:
	date_used = find_exchange(date, result);

	// Print Line
	std::cout << "Input: [" << date << "| " << YELLOW << std::setw(5) << val_money << NC << "] | ";
	std::cout << "Using: [" << date_used << "| " << CYAN << std::setw(7) << result << NC << "] | ";
	std::cout << YELLOW << value << NC << " * " << CYAN << result << GREEN << " --Exchange---> " << WHITE << value * result << NC << std::endl;
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
		if (i == 0 || input.empty())
			continue;
		ft_strtrim(input);
		start_convertion(input);
	}
}
