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

// PmergeMe declaration --------------------------------------------------------

#ifndef _PMERGEME_HPP
# define _PMERGEME_HPP

# include <string>
# include <vector>
# include <list>
# include <cstdlib>
# include <iostream>

class PmergeMe
{
	private:
		std::vector<int>	_array;
		std::list<int>		_list;
	public:
		// CONSTRUCTORS AND DESTRUCTORS---------------------------------------------
		PmergeMe(void);
		PmergeMe(std::string args);
		PmergeMe(PmergeMe const& other);
		~PmergeMe(void);

		// OPERATORS----------------------------------------------------------------
		PmergeMe& operator=(PmergeMe const& other);

		// METHODS AND MEMBER FUNCTIONS---------------------------------------------
		static	int print_error(std::string msg);
		void		insert(std::string args);
		void		start(void);

		// EXCEPTION CLASSES -------------------------------------------------------
		class PmergeError : public std::exception
		{
			private:
				const char *_msg;
			public:
				PmergeError(const char *msg): _msg(msg){};
				virtual const char * what() const throw ()
				{
					return (_msg);
				}
		};
};

#endif // !_PMERGEME_HPP

