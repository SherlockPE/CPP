#ifndef _COLORS
# define _COLORS

// clang-format off
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

// whatever declaration --------------------------------------------------------

#ifndef _WHATEVER_HPP
# define _WHATEVER_HPP

#include <iostream>

// METHODS AND MEMBER FUNCTIONS-------------------------------------------------

template <typename T>
void	swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T	min(T a, T b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T	max(T a, T b)
{
	if (a > b)
		return (a);
	return (b);
}
#endif // !_WHATEVER_HPP