#ifndef _COLORS
# define _COLORS
#include <cstddef>
#include <exception>
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

// easyfind declaration --------------------------------------------------------

#ifndef _EASYFIND_HPP
# define _EASYFIND_HPP

#include <iostream>


class	notFound : public std::exception
{
	public:
		virtual const char * what() const throw()
		{
			return ("Not Found");
		};
};

template <typename T>
void	easyfind(T container, int ocurrence)
{
	typedef typename T::iterator  top;
	for (top i = container.begin(); i != container.end(); i++)
	{
		if (*i == ocurrence)
		{
			std::cout << GREEN << "Found [" << *i << "] " <</*  "in pos: " << i << */ NC << std::endl;
			return ;
		}
	}
	throw notFound();
}

#endif // !_EASYFIND_HPP

