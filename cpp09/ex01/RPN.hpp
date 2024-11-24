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

// RPN declaration --------------------------------------------------------

#ifndef _RPN_HPP
# define _RPN_HPP

# include <exception>
# include <string>
# include <iostream>
# include <cstdlib>
# include <stack>

class RPN
{
	private:
		std::stack <int>	_stack;
		std::string			_storage;

	public:
		// CONSTRUCTORS AND DESTRUCTORS---------------------------------------------
		RPN(void);
		RPN(std::string arguments);
		RPN(RPN const& other);

		~RPN(void);

		// OPERATORS----------------------------------------------------------------
		RPN& operator=(RPN const& other);

		// METHODS AND MEMBER FUNCTIONS---------------------------------------------
		// Principal
		void		init(std::string msg);
		void		start(void);

		// UTILS
		static int	print_error(std::string msg);
		int			sum(int num1, int num2);
		int			sub(int num1, int num2);
		int			mul(int num1, int num2);
		int			div(int num1, int num2);

		// EXCEPTION CLASSES -------------------------------------------------------
		class PolishError : public std::exception
		{
			private:
				const char *_msg;
			public:
				PolishError(const char *msg): _msg(msg){};
				virtual const char * what() const throw ()
				{
					return (_msg);
				}
		};
};

#endif // !_RPN_HPP

