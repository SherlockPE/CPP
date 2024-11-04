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

// Span declaration --------------------------------------------------------

#ifndef _SPAN_HPP
# define _SPAN_HPP

#include <exception>
#include <vector>
#include <cstdlib>

class Span
{
	private:
		std::vector<int>	_array;
		size_t				max;
		Span(void);
	public:
		// CONSTRUCTORS AND DESTRUCTORS---------------------------------------------
		Span(unsigned int n);
		Span(Span const& other);
		~Span(void);

		// OPERATORS----------------------------------------------------------------
		Span& operator=(Span const& other);

		// METHODS AND MEMBER FUNCTIONS---------------------------------------------

		void			addNumber(int number);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);

		class noSpaceLeft : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return (RED"No space left\n" NC);
				};
		};
		class notFound : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return (RED"No span can be found\n" NC);
				};
		};
};

#endif // !_SPAN_HPP

