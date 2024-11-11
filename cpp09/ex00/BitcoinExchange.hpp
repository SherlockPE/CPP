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

class BitcoinExchange
{
	private:
		std::map<std::string, double>	_dict;
		std::string						_data_base;
		std::string						_input;

		BitcoinExchange(void);
	public:
		// CONSTRUCTORS AND DESTRUCTORS---------------------------------------------
		BitcoinExchange(char *input_file_name);
		BitcoinExchange(BitcoinExchange const& other);
		~BitcoinExchange(void);

		// OPERATORS----------------------------------------------------------------
		BitcoinExchange& operator=(BitcoinExchange const& other);

		// METHODS AND MEMBER FUNCTIONS---------------------------------------------
		void	print_database(void);
		void	print_input_file(void);

		void	get_content(std::string src, std::string &key, std::string &value);
		// EXCEPTIONS---------------------------------------------------------------
		class openFail : public std::exception
		{
			private:
				std::string _msg;
				std::string _name;
			public:
				openFail(std::string name): _name(name)
				{
					_msg = "Error: could not open the file [";
					_msg.append(_name);
					_msg.append("]");
				};
				virtual ~openFail() _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW{};
				virtual const char * what() const throw()
				{
					return (_msg.c_str());
				};
		};
};

#endif // !_BITCOINEXCHANGE_HPP

