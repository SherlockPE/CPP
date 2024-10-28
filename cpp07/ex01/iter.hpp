#ifndef _COLORS
# define _COLORS

// clang-format off
#include <cstddef>
# define BLACK   "\033[1;30m"
# define RED     "\033[1;31m"
# define GREEN   "\033[1;32m"
# define YELLOW  "\033[1;33m"
# define BLUE    "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN    "\033[1;36m"
# define WHITE   "\033[1;37m"
# define NC      "\033[0m"
// clang-format on

#endif // !_COLORS

// iter declaration --------------------------------------------------------

#ifndef _ITER_HPP
# define _ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *array,  size_t length, void (*f)(T &c))
{
	// int test = 0;
	for (size_t i = 0; i < length; i++)
		(*f)(array[i]);
}

#endif // !_ITER_HPP

