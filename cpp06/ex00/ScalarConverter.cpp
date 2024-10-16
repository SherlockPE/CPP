#include "ScalarConverter.hpp"
#include <iostream>
#include <cstdlib>

// METHODS AND MEMBER FUNCTIONS-------------------------------------------------

void	print_int(std::string literal)
{
	int		number;

	number = atoi(literal.c_str());
	std::cout << "int: ";
	std::cout << number << "\n";
}

void	print_char(std::string literal)
{
	char	c;
	int		number;

	number = atoi(literal.c_str());
	std::cout << "char: " ;
	if (number < 32 || number > 126)
	{
		std::cout << "Non displayable\n";
		return ;
	}
	c = static_cast<char> (number);
	std::cout << c <<  "\n";
}

/* 
Cómo averiguo un tipo de dato a partir del texto?

Si tiene una sola letra es un char =====[CHAR]=======
"A" -------> 65 (se castea y listo)

Si es un número sin decimales y en el rango de un int es un INT =====[INT]=======
"24" ------> int

Si tiene una f o F al final y TIENE DECIMAL es un float =====[FLOAT]=======
"999999.0f" ------> float
"999999.0F" ------> float

Si tiene un decimal pero NO UNA F o f es un double =====[DOUBLE]=======
"999999999999999999999999999999999999999999999999999999999999
999999999999999999999999999999999999999999999999999999999999
999999999999999999999999999999999999999999999999999999999999
999999999999999999999999999999999999999999999999999999999999
999999999.0" -----> double

 */
int	get_type_info(std::string literal, t_data_info *info)
{
	int has_sign;

	if (!literal[0])
		return (EXIT_FAILURE);
	has_sign = 0;
	info->has_decimal = 0;
	info->has_f = 0;
	info->has_letter = 0;
	info->has_nums = 0;
	for (size_t i = 0; i < literal.length(); i++)
	{
		if (literal[i] == '+' || literal[i] == '-')
			(has_sign)++, (info->has_letter)--;
		if (literal[i] == '.')
			(info->has_decimal)++,(info->has_letter)--;
		if (literal[i] == 'f' || literal[i] == 'F')
			(info->has_f)++, (info->has_letter)--;
		if ((literal[i] >= 32 && literal[i] < 127) && (literal[i] < '0' || literal[i] > '9'))
			(info->has_letter)++;
		if ((literal[i] >= '0' && literal[i] <= '9'))
			(info->has_nums)++;
		if (has_sign > 1 || info->has_decimal > 1 || info->has_f > 1)
			return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

int	get_type_value(t_data_info info)
{
	if (info.has_letter == 1 && !info.has_decimal && !info.has_f)
		return (CHAR);
	if (info.has_nums && !info.has_decimal && !info.has_f && !info.has_letter)
		return (INT);
	if (info.has_decimal && info.has_f && !info.has_letter)
		return (FLOAT);
	if (info.has_decimal && !info.has_f && !info.has_letter)
		return (DOUBLE);
	return (NOT_FOUND);
}

void	print_values(t_values values)
{
	std::cout	<< "char: " << values.character << "\n"
				<< "int: " << values.integer << "\n"
				<< "float: " << std::fixed << std::setprecision(1) << values.float_value << "f" << "\n"
				<< "double: " << values.double_value << std::endl;
}

void	conver_from(t_values *values, int data_type, std::string literal)
{
	if (data_type == CHAR) //Gracias Paula <3
	{
		values->character = literal[0];
		values->integer = static_cast<int> (values->character /* - '0' */);
		values->float_value = static_cast<float> (values->character /* - '0' */);
		values->double_value = static_cast<double> (values->character /* - '0' */); 
	}
	else if (data_type == INT) //Gracias Paula <3
	{
		values->integer = (atoi(literal.c_str()));
		values->character = values->integer;
		values->float_value = static_cast<float>(values->integer);
		values->double_value = values->integer;
	}
	else if (data_type == FLOAT)
	{
		std::cout << "me llega: " << literal << "\n";
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
	switch (type)
	{
		case NOT_FOUND:
			std::cout << "Error: Value type not found\n";
			break;
		case CHAR:
			std::cout << "is a char!!\n";
			conver_from(&values, CHAR, literal);
			break;
		case INT:
			std::cout << "is a INT!!\n";
			conver_from(&values, INT, literal);
			break;
		case FLOAT:
			conver_from(&values, FLOAT, literal);
			std::cout << "is a FLOAT!!\n";
			break;
		case DOUBLE:
			conver_from(&values, DOUBLE, literal);
			std::cout << "is a DOUBLE!!\n";
			break;
		default:
			std::cout << "weird error ocurred\n";
			break;
	}
	print_values(values);
}
