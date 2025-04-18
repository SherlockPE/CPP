#include "Span.hpp"
#include <cstddef>
#include <iostream>
#include <algorithm>

// CONSTRUCTORS AND DESTRUCTORS-------------------------------------------------
Span::Span(unsigned int n): max(n)
{
	std::cout << GREEN "Span unsigned int constructor called" NC << std::endl;
	_array.reserve(n);
}

Span::Span(void): max(1)
{
	std::cout << GREEN "Span default constructor called" NC << std::endl;
	_array.reserve(1);
}

Span::Span(Span const& other)
{
	std::cout << GREEN "Span copy constructor called" NC << std::endl;
	*this = other;
}

Span::~Span(void)
{
	std::cout << RED "Span destructor called" NC << std::endl;
}

// OPERATORS--------------------------------------------------------------------
Span& Span::operator=(Span const& other)
{
	if (this == &other)
		return (*this);
	// DO THINGS
	_array = other._array;
	return (*this);
}

// METHODS AND MEMBER FUNCTIONS-------------------------------------------------

void	Span::addNumber(int number)
{
	if (_array.size() < max)
		_array.push_back(number);
	else
		throw (noSpaceLeft());
}

void	Span::addManyNumbers(int start, int end)
{
	if (start < end)
	{
		for (int i = start; i <= end; i++)
			addNumber(i);
	}
	else
	{
		for (int i = start; i >= end; i--)
			addNumber(i);
	}
}

void	Span::print_list(void)
{
	for (size_t i = 0; i < _array.size(); i++) {
		std::cout << CYAN << "[" << _array[i] << "]" << NC " ";
	}
	std::cout << "\n";
}

unsigned int	Span::shortestSpan(void)
{
	if (_array.size() < 2)
		throw (notFound());

	int	short_num = std::abs(_array[0] - _array[_array.size() - 1]);

	for (size_t i = 0; i < _array.size(); i++)
	{
		for (size_t j = 0; j < _array.size(); j++)
		{
			if (&_array[i] == &_array[j])
				continue;
			if (std::abs(_array[i] - _array[j]) < short_num)
				short_num = std::abs(_array[i] - _array[j]);
		}
	}
	return short_num;
}

unsigned int	Span::longestSpan(void)
{
	// std::min_element(_array.begin(), _array.end());
	int min_num;
	int max_num;

	min_num = *std::min_element(_array.begin(), _array.end());
	max_num = *std::max_element(_array.begin(), _array.end());

	return (std::abs(max_num - min_num));
}

