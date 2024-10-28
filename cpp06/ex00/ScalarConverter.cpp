#include "ScalarConverter.hpp"
#include <climits>


// METHODS AND MEMBER FUNCTIONS-------------------------------------------------

static int	parse(std::string literal, t_data_info	*info)
{
	if (!literal[0])
		return (EXIT_FAILURE);
	if (literal == "-inff" || literal == "+inff" || literal == "inff" || 
		literal == "-inf" || literal == "+inf" || literal == "inf" || 
		literal == "nan" || literal == "nanf")
		return (EXIT_SUCCESS);
	for (size_t i = 0; i < literal.length(); i++)
	{
		if (literal[i] == '+' || literal[i] == '-')
			(info->has_sign)++;
		if (literal[i] == '.')
			(info->has_decimal)++,(info->has_letter)--;
		if (literal[i] == 'f' || literal[i] == 'F')
			(info->has_f)++, (info->has_letter)--;
		if ((literal[i] >= 32 && literal[i] < 127) && (literal[i] < '0' || literal[i] > '9') 
			&& (literal[i] != '+' || literal[i] != '-'))
			(info->has_letter)++;
		if ((literal[i] >= '0' && literal[i] <= '9'))
			(info->has_nums)++;
		if ((info->has_sign > 1 || info->has_decimal > 1 || info->has_f > 1) ||
			(info->has_letter > 1))
			return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

void	cast(std::string literal, t_values *values, t_data_info	info)
{
	double max_num;

	if (!info.has_decimal && !info.has_f && info.has_letter == 1 && !info.has_nums)
		max_num = literal[0];
	else
		max_num = std::strtod(literal.c_str(), NULL);

	values->character = static_cast<char>(max_num);
	values->integer = static_cast<int>(max_num);
	values->float_value = static_cast<float>(max_num);
	values->double_value = static_cast<double>(max_num);
}

static void	print_values(t_values values)
{
	// CHAR
	std::cout << "char: ";
	if (values.character >= 32 && values.character <= 126)
		std::cout << values.character << "\n";
	else
		std::cout << "Non displayable\n";
	// INT
	std::cout << "int: ";
	if (values.double_value > INT_MIN && values.double_value < INT_MAX)
		std::cout << values.integer << "\n";
	else
		std::cout << "impossible\n";
	// FLOAT
	std::cout << std::fixed << "float: " << std::setprecision(1) << values.float_value << "f" << "\n";
	// DOUBLE
	std::cout << "double: " << std::setprecision(1) << values.double_value << "\n";
}

void	ScalarConverter::convert(std::string literal)
{
	t_values	values;
	t_data_info	info;

	if (parse(literal, &info))
	{
		std::cout << RED <<  "Sorry: The type conversion of [" << literal << "] is impossible" << NC << std::endl;
		return ;
	}
	cast(literal, &values, info);
	print_values(values);
}
