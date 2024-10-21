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

// C declaration --------------------------------------------------------

#ifndef _C_HPP
# define _C_HPP

#include <iostream>
class C
{
	public:
		// CONSTRUCTORS AND DESTRUCTORS-----------------------------------------
		C(void);
		C(C const& other);
		~C(void);

		// OPERATORS------------------------------------------------------------
		C& operator=(C const& other);

		// METHODS AND MEMBER FUNCTIONS-----------------------------------------
};

#endif // !_C_HPP
