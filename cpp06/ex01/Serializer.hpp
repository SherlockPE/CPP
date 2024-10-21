#ifndef _COLORS
#define _COLORS

// clang-format off
#define BLACK   "\033[1;30m"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN    "\033[1;36m"
#define WHITE   "\033[1;37m"
#define NC      "\033[0m"
// clang-format on

#endif // !_COLORS

// Serializer declaration --------------------------------------------------------

#ifndef _SERIALIZER_HPP
# define _SERIALIZER_HPP

# include <iostream>

struct Data
{
	std::string	_name;
	int			_age;
	Data (std::string name, int age)
	{
		_name = name;
		_age = age;
	}
};

class Serializer
{
	public:
		Serializer(void);
		Serializer(Serializer const& other);
		virtual ~Serializer(void) = 0;

		Serializer& operator=(Serializer const& other);
		// METHODS AND MEMBER FUNCTIONS-----------------------------------------
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif // !_SERIALIZER_HPP

