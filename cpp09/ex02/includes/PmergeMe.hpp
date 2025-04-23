#ifndef _COLORS
# define _COLORS
# define BLACK    "\033[1;30m"
# define RED      "\033[1;31m"
# define GREEN    "\033[1;32m"
# define YELLOW   "\033[1;33m"
# define BLUE     "\033[1;34m"
# define MAGENTA  "\033[1;35m"
# define CYAN     "\033[1;36m"
# define WHITE    "\033[1;37m"
# define BOLD	  "\033[1m"
# define BOLD_OFF "\033[22m"
# define ITALIC   "\033[3m"
# define NC       "\033[0m"
#endif // !_COLORS

// PmergeMe declaration --------------------------------------------------------

#ifndef _PMERGEME_HPP
# define _PMERGEME_HPP

#  ifndef PRINT
#   define PRINT 0
#  endif

# include <string>
# include <vector>
# include <list>
# include <cstdlib>
# include <sstream>
# include <iostream>
# include <algorithm>

template <typename T>
void print_pairs(const T &arr, const std::string &color, std::string text)
{
	typedef typename T::const_iterator iterator;
	std::cout << color << text;
	for (iterator it = arr.begin(); it != arr.end(); ++it)
		std::cout << "[" << it->first << ", " << it->second << "]\n";
	std::cout << NC << std::endl;
}


template <typename T>
void print_array(const T &arr, const std::string &color, std::string text)
{
	typedef typename T::const_iterator iterator;
	std::cout << color << text;
	iterator it = arr.begin();

	if (PRINT)
	{
		for ( ; it != arr.end(); it++)
			std::cout << *it << " ";
		return ;
	}
	for (size_t i = 0; i < 4 && it != arr.end(); i++)
	{
		std::cout << *it << " ";
		it++;
	}
	if (arr.size() > 4)
		std::cout << " [...]";
	std::cout << NC << std::endl;
}

class PmergeMe
{
	private:
		std::vector<long>	_array;
		std::list<long>		_list;
	public:
		// CONSTRUCTORS AND DESTRUCTORS---------------------------------------------
		PmergeMe(void);
		PmergeMe(std::string args);
		PmergeMe(PmergeMe const& other);
		~PmergeMe(void);

		// OPERATORS----------------------------------------------------------------
		PmergeMe& operator=(PmergeMe const& other);

		// METHODS AND MEMBER FUNCTIONS---------------------------------------------
		static	int 		print_error(std::string msg);
		void				insert(std::string args);
		void				start(std::stringstream &arr);
		void				parse(std::stringstream &arr);

		// ALGORITHM - VECTOR
		void				ford_jhonson_vector(void);
		void				recursive_sort_vector(std::vector<std::pair<long, long> > &pairs);
		void				make_and_sort_pairs_vector(std::vector<std::pair<long, long> > &pairs, long &last_value);
		void				last_insertion_vector(long last_value, std::vector<std::pair<long, long> > &pairs, std::vector<long> &result);

		// ALGORITHM - LIST
		void				ford_jhonson_list(void);
		void				recursive_sort_list(std::list<std::pair<long, long> > &pairs);
		void				make_and_sort_pairs_list(std::list<std::pair<long, long> > &pairs, long &last_value);
		void				last_insertion_list(long last_value, std::list<std::pair<long, long> > &pairs, std::list<long> &result);

		// ALGORITHM UTILS
		long				generate_insertion_order(void);

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