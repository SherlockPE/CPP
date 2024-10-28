#ifndef _COLORS
#define _COLORS

#define BLACK "\033[1;30m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN "\033[1;36m"
#define WHITE "\033[1;37m"
#define NC "\033[0m"

#endif // !_COLORS

// ScalarConverter declaration -------------------------------------------------

#ifndef _SCALARCONVERTER_HPP
# define _SCALARCONVERTER_HPP
# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define CHAR_MAX 127

# include <iostream>
# include <iomanip>
# include <cstdlib>

enum types
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	NOT_FOUND
};

typedef struct s_data_info
{
	int		has_decimal;
	int		has_sign;
	int		has_f;
	int		has_letter;
	int		has_nums;

	s_data_info()
	{
		has_decimal = 0;
		has_sign = 0;
		has_f = 0;
		has_letter = 0;
		has_nums = 0;
	}
} t_data_info;

typedef struct s_values
{
	char	character;
	int		integer;
	float	float_value;
	double	double_value;

	s_values()
	{
		character = 0;
		integer = 0;
		float_value = 0;
		double_value = 0;
	}
} t_values;

class ScalarConverter
{
	public:
		// CONSTRUCTORS AND DESTRUCTORS-----------------------------------------
		ScalarConverter(void){};
		ScalarConverter(ScalarConverter const &other){(void)other;};
		virtual ~ScalarConverter(void) = 0;

		// METHODS AND MEMBER FUNCTIONS-----------------------------------------
		static void	convert(std::string literal);

		// OPERATORS------------------------------------------------------------
		ScalarConverter &operator=(ScalarConverter const &other){(void)other; return (*this);};
}; 

#endif // !_SCALARCONVERTER_HPP
