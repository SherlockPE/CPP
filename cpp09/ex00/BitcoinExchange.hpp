#ifndef _COLORS
# define _COLORS
# define BLACK   "\033[1;30m"
# define RED     "\033[1;31m"
# define GREEN   "\033[1;32m"
# define YELLOW  "\033[1;33m"
# define BLUE    "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN    "\033[1;36m"
# define WHITE   "\033[1;37m"
# define NC      "\033[0m"
#endif // !_COLORS

// BitcoinExchange declaration --------------------------------------------------------

#ifndef _BITCOINEXCHANGE_HPP
# define _BITCOINEXCHANGE_HPP

# include <cstdlib>
# include <iostream>
# include <fstream>
# include <exception>
# include <map>
# include <iostream>
# include <cstring>
# include <iostream>
#include <algorithm>
# include <iomanip>
# include <climits>
# include <iostream>

typedef struct s_data
{
	int	day;
	int	month;
	int	year;
	s_data(void)
	{
		day = 0;
		month = 0;
		year = 0;
	};
}t_data ;


typedef std::map<std::string, double> _dict;

class BitcoinExchange
{
	private:
		_dict			_change;
		std::ifstream	_input_file;
		// std::string		_data_base;
		// std::string		_input;
		// METHODS AND MEMBER FUNCTIONS---------------------------------------------
		void		extract_data_base(std::ifstream &archive);

		
	public:
		// CONSTRUCTORS AND DESTRUCTORS---------------------------------------------
		BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const& other);
		~BitcoinExchange(void);

		// OPERATORS----------------------------------------------------------------
		BitcoinExchange& operator=(BitcoinExchange const& other);

		// METHODS AND MEMBER FUNCTIONS---------------------------------------------

		// Utils
		void		print_error(std::string msg1, std::string msg2);
		std::string	pass_days_to_str(t_data &date);
		void		print_change_dict(void);
		void		ft_strtrim(std::string &str);
		int			parse_digit(std::string str);
		int			validate_date(std::string &date);
		int			is_leap_year(int year);




		int	get_struct_value(std::string line);
		void	open_files(const char *input, const char * data_base);

		// Principal functions
		void		start_change(void);
		void		start_convertion(std::string input);
		std::string	find_exchange(std::string date, double &result);

		void	get_content(std::string src, std::string &key, std::string &value);
		// EXCEPTIONS---------------------------------------------------------------
		class ErrorException : public std::exception
		{
			private:
				std::string _msg;
				std::string _name;
			public:
				ErrorException(std::string name): _name(name)
				{
					_msg = "Error: ";
					_msg.append(_name);
				};
				virtual ~ErrorException() _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW{};
				virtual const char * what() const throw()
				{
					return (_msg.c_str());
				};
		};
};

#endif // !_BITCOINEXCHANGE_HPP

