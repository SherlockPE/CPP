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

// A declaration --------------------------------------------------------

#ifndef _A_HPP
# define _A_HPP

// #pragma  once
#include "Base.hpp"


class A : public Base {};

#endif // !_A_HPP

