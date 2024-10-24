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

// Base declaration --------------------------------------------------------

#ifndef _BASE_HPP
# define _BASE_HPP

class Base
{
	public:
		// CONSTRUCTORS AND DESTRUCTORS-----------------------------------------
		virtual ~Base(void);
};

#endif // !_BASE_HPP

