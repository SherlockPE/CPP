#include "ScalarConverter.hpp"
#include <iostream>
#include <cstdlib>

// METHODS AND MEMBER FUNCTIONS-------------------------------------------------


// Con esta función obtengo la info que tiene mi string
static int	get_type_info(std::string literal, t_data_info *info)
{
	if (!literal[0])
		return (EXIT_FAILURE);
	info->has_sign = 0;
	info->has_decimal = 0;
	info->has_f = 0;
	info->has_letter = 0;
	info->has_nums = 0;
	if (literal == "-inff" || literal == "+inff" || literal == "inff" || 
		literal == "-inf" || literal == "+inf" || literal == "inf" || 
		literal == "nan" || literal == "nanf")
		return (EXIT_SUCCESS);
	for (size_t i = 0; i < literal.length(); i++)
	{
		if (literal[i] == '+' || literal[i] == '-')
			(info->has_sign)++, (info->has_letter)--;
		if (literal[i] == '.')
			(info->has_decimal)++,(info->has_letter)--;
		if (literal[i] == 'f' || literal[i] == 'F')
			(info->has_f)++, (info->has_letter)--;
		if ((literal[i] >= 32 && literal[i] < 127) && (literal[i] < '0' || literal[i] > '9'))
			(info->has_letter)++;
		if ((literal[i] >= '0' && literal[i] <= '9'))
			(info->has_nums)++;
		if ((info->has_sign > 1 || info->has_decimal > 1 || info->has_f > 1) ||
			(info->has_letter > 1))
			return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

// Cómo consigo un tipo de dato a partir del texto?

// =====[CHAR]=======
// Si tiene una sola letra es un char
// "A" -------> 65 (se castea y listo)

// =====[INT]=======
// Si es un número sin decimales y en el rango de un int es un INT
// "24" ------> int

// =====[FLOAT]=======
// Si tiene una f o F al final y TIENE DECIMAL es un float
// "999999.0f" ------> float
// "999999.0F" ------> float

// =====[DOUBLE]=======
// Si tiene un decimal pero NO UNA F o f es un double
// "99999999999999.0" -----> double
static int	get_type_value(t_data_info info)
{
	if ((info.has_letter == 1 && !info.has_decimal && !info.has_f) || 
		(info.has_sign == 1 && !info.has_decimal && !info.has_f && 
		!info.has_letter && !info.has_nums))
		return (CHAR);
	if (info.has_nums && !info.has_decimal && !info.has_f && !info.has_letter)
		return (INT);
	if (info.has_decimal && info.has_f && !info.has_letter)
		return (FLOAT);
	if (info.has_decimal && !info.has_f && !info.has_letter)
		return (DOUBLE);
	return (NOT_FOUND);
}

static void	print_values(t_values values, int type)
{
	if (type == NOT_FOUND)
	{
		std::cout	<< "char: impossible" << "\n"
					<< "int: impossible" << "\n"
					<< "float: nanf" << "\n"
					<< "double: nan" << std::endl;
		return;
	}
	if (values.character >= 32 && values.character <= 126)
		std::cout << "char: " << values.character << "\n";
	else
		std::cout << "char: Non displayable" << "\n";
	std::cout	<< "int: " << values.integer << "\n"
				<< "float: " << std::fixed << std::setprecision(1) << values.float_value << "f" << "\n"
				<< "double: " << values.double_value << std::endl;
}

void	convert_from(t_values *values, int data_type, std::string literal)
{
	if (data_type == CHAR)
	{
		values->character = literal[0];
		values->integer = static_cast<int> (values->character);
		values->float_value = static_cast<float> (values->character);
		values->double_value = static_cast<double> (values->character); 
	}
	else if (data_type == INT)
	{
		values->integer = (atoi(literal.c_str()));
		values->character = static_cast<char>(values->integer);
		values->float_value = static_cast<float>(values->integer);
		values->double_value = static_cast<double>(values->integer);
	}
	else if (data_type == FLOAT)
	{
		values->float_value = static_cast<float>(atof(literal.c_str()));
		values->character = static_cast<char> (values->float_value);
		values->integer = static_cast<int> (values->float_value);
		values->double_value = static_cast<double> (values->float_value);
	}
	else if (data_type == DOUBLE)
	{
		values->double_value = static_cast<double>(atof(literal.c_str()));
		values->character = static_cast<char>(values->double_value);
		values->integer = static_cast<int>(values->double_value);
		values->float_value = static_cast<float>(values->double_value);
	}
}

void	ScalarConverter::convert(std::string literal)
{
	int			type;
	t_data_info info;
	t_values	values;
	if (get_type_info(literal, &info))
	{
		std::cout << "Sorry: The type conversion of [" << literal << "] is impossible\n";
		return ;
	}
	type = get_type_value(info);
	convert_from(&values, type, literal);
	print_values(values, type);
}
