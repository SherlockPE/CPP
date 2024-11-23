#include "BitcoinExchange.hpp"

void	BitcoinExchange::print_error(std::string msg1, std::string msg2)
{
	std::cout << RED "Error: " << msg1 << msg2 << "." NC << std::endl;
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
