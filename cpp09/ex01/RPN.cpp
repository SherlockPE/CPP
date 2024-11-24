#include "RPN.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <cstddef>
#include <algorithm>

// CONSTRUCTORS AND DESTRUCTORS-------------------------------------------------
RPN::RPN(void){}

RPN::RPN(RPN const& other)
{
	std::cout << GREEN "RPN copy constructor called" NC << std::endl;
	*this = other;
}

RPN::~RPN(void) {}

// OPERATORS--------------------------------------------------------------------
RPN& RPN::operator=(RPN const& other)
{
	if (this == &other)
		return (*this);
	// DO THINGS
	return (*this);
}

// METHODS AND MEMBER FUNCTIONS-------------------------------------------------

// UTILS
int	RPN::sum(int num1, int num2) 
{
	return num1 + num2;
}
int	RPN::sub(int num1, int num2) 
{
	return num1 - num2;
}
int	RPN::mul(int num1, int num2) 
{
	return num1 * num2;
}
int	RPN::div(int num1, int num2) 
{
	if (num2 == 0)
		throw PolishError("Error: Division by cero");
	return num1 / num2;
}

int	RPN::print_error(std::string msg)
{
	std::cout << RED << "Error: " << msg << NC << std::endl;
	return (EXIT_FAILURE);
}


// Principal
void	RPN::init(std::string args)
{
	size_t				pos = 0;
	size_t				num_operators = 0;
	std::string 		valid_chars("0123456789-+*/");


	pos = args.find_first_not_of(' ');
	if (pos == std::string::npos)
		throw (PolishError("Error: Invalid input"));

	while (pos != std::string::npos)
	{
		if (pos + 1 < args.size() && args[pos + 1] != ' ')
			throw (PolishError("Error: Invalid input"));

		// Comprobar que el caracter actual sea válido:
		if (std::find(valid_chars.begin(), valid_chars.end(), args[pos]) == valid_chars.end())
			throw (PolishError("Error: Invalid characters in the input"));

		// Meter el valor en storage
		_storage.append(1, args[pos]);

		if (pos >= args.size())
			break;

		pos = args.find_first_not_of(' ', pos + 1);
	}

	// Una vez terninado compruebo si el storage es valido
	// 		-Que tenga al menos 3 elementos
	// 		-Que el ultimo valor no sea un digito (tiene que ser un operador para poder funcionar)
	if (_storage.size() <= 2 || std::isdigit(_storage[_storage.size() - 1]))
		throw (PolishError("Error: Invalid input"));

	num_operators += std::count(args.begin(), args.end(), '+');
	num_operators += std::count(args.begin(), args.end(), '-');
	num_operators += std::count(args.begin(), args.end(), '*');
	num_operators += std::count(args.begin(), args.end(), '/');

	if (num_operators != (_storage.size() - num_operators) - 1)
		throw (PolishError("Invalid operator"));
}

void	RPN::start(void)
{
	int			op2 = 0;
	int			op1 = 0;
	int			final_value = 0;
	std::string	operators = "+-*/";

	for (size_t i = 0; i < _storage.size(); i++)
	{
		// Si el caracter es un número, lo empujamos a la pila.
		if (std::isdigit(_storage[i]))
			_stack.push(_storage[i] - '0');
		else if (_storage[i] == '+' || _storage[i] == '-' || _storage[i] == '*' || _storage[i] == '/')
		{
			// Antes de hacer la operación, nos aseguramos de que haya al menos dos elementos en la pila.
			if (_stack.size() < 2)
				return ((void)print_error("Insufficient operands for operation"));

			// Obtenemos los dos operandos de la pila.
			op2 = _stack.top();
			_stack.pop();
			op1 = _stack.top();
			_stack.pop();

			// Switch case of operands and push the result of the operation in the stack
			if (std::find(operators.begin(), operators.end(), _storage[i]) == operators.end())
				continue;
			std::cout << op1 << " " << _storage[i] << " " << op2 << " = " ;
			switch (_storage[i])
			{
				case '+':
					_stack.push(sum(op1, op2));
					break;
				case '-':
					_stack.push(sub(op1, op2));
					break;
				case '*':
					_stack.push(mul(op1, op2));
					break;
				case '/':
					_stack.push(div(op1, op2));
					break;
				default:
					std::cerr << "Error: Invalid operator" << std::endl;
					return;
			}
			std::cout << _stack.top() << "\n";
		}
	}
	// Al final, debe haber solo un único valor en la pila
	if (_stack.size() != 1)
		return ((void)print_error("Invalid RPN expression"));

	// Imprimo el resultado
	final_value = _stack.top();
	std::cout << GREEN << "Result: " << final_value << NC <<  std::endl;
}


// ./RPN "3 4 +";           # 7 (3 + 4)
// ./RPN "3 4 + 5 *";       # 35 ((3 + 4) * 5)
// ./RPN "2 3 4 + *";       # 14 (2 * (3 + 4))
// ./RPN "5 1 2 + 4 * + 3 -"; # 14 (((5 + (1 + 2) * 4) - 3))
// ./RPN "3 4 + 2 5 + *";   # 35 ((3 + 4) * (2 + 5))
// ./RPN "3 4 + 2 5 + * 7 /"; # 5 ((3 + 4) * (2 + 5)) / 7
// ./RPN "3 4 + 2 5 + * 7 +"; # 42 ((3 + 4) * (2 + 5)) + 7
// ./RPN "9 3 / 3 3 + *";   # 18 ((9 / 3) * (3 + 3))
// ./RPN "10 2 8 * +";      # 26 (10 + (2 * 8))
// ./RPN "1 2 3 4 + +";     # 10 ((1 + 2) + 3 + 4)

// # Expresiones inválidas:
// ./RPN "3 + 4";           # Error: Operador sin operandos suficientes
// ./RPN "3 4 + +";         # Error: Operador sin operandos suficientes
// ./RPN "3 4 + 5";         # Error: Expresión mal formada, falta operador
// ./RPN "3 4 + + 2";       # Error: Operador sin operandos suficientes
// ./RPN "3 4 * 5 2";       # Error: Más operandos que operadores
// ./RPN "3 4 5 +";         # Error: Más operandos que operadores
// ./RPN "3 4 + 2 / 0";     # Error: División por cero
// ./RPN "3 4 + 5 6";       # Error: Operadores y operandos en orden incorrecto
// ./RPN "3 + 4 5";         # Error: Operador en lugar de operando
// ./RPN "3 4 + *";         # Error: Operador sin operandos suficientes
