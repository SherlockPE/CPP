#include "BitcoinExchange.hpp"

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
		_change.insert(std::make_pair(date, std::strtod(change.c_str(), NULL)));
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
	// print_change_dict();
}