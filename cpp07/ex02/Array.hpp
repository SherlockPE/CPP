#ifndef _COLORS
# define _COLORS
#include <cstddef>
#include <cstring>
#include <exception>
# define BLACK   "\033[1;30m"
# define RED     "\033[1;31m"
# define GREEN   "\033[1;32m"
# define YELLOW  "\033[1;33m"
# define BLUE    "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN    "\033[1;36m"
# define WHITE   "\033[1;37m"
# define NC      "\033[0m"
#endif // !_COLORS

// Array declaration --------------------------------------------------------

#ifndef _ARRAY_HPP
# define _ARRAY_HPP

# include <iostream>


template <typename Type>
class Array
{
	private:
		Type	*_array;
		size_t	_size;
	public:
		// CONSTRUCTORS AND DESTRUCTORS---------------------------------------------
		Array(void)
		{
			std::cout << GREEN "Array default constructor called" NC << std::endl;
			_array = new Type[1];
			// std::memset(_array, 0, _size);
			_size = 1;
		};
		Array(unsigned int n)
		{
			std::cout << GREEN "Array default constructor called" NC << std::endl;
			_array = new Type[n];
			// std::memset(_array, 0, _size);
			_size = n;
		};
		Array(Array const& other)
		{
			std::cout << GREEN "Array copy constructor called" NC << std::endl;
			_array = NULL;
			*this = other;
		};
		~Array(void)
		{
			std::cout << RED "Array destructor called" NC << std::endl;
			delete [] _array;
		}
		// OPERATORS----------------------------------------------------------------
		Array& operator=(Array const& other)
		{
			if (this == &other)
				return (*this);

			delete [] _array;
			_array = new Type[other._size];
			for (size_t i = 0; i < other._size; i++)
				_array[i] = other._array[i];

			this->_size = other._size;
			return (*this);
		};
		Type& operator[](size_t i)
		{
			if (i >= _size)
				throw BadAccessException();
			return _array[i];
		};
		// METHODS AND MEMBER FUNCTIONS---------------------------------------------
		size_t	size(void)
		{
			return (_size);
		};
		void	print_list(void)
		{
			size_t i = 0;
			while (i < _size - 1)
			{
				std::cout << CYAN << "[" << _array[i] << "]" << NC ", ";
				i++;
			}
			std::cout << CYAN << "[" << _array[i] << "]" << NC << std::endl;;
		}
		void	print_memory(void)
		{
			size_t i = 0;
			while (i < _size - 1)
			{
				std::cout << CYAN << "[" << &_array[i] << "]" << NC ", ";
				i++;
			}
			std::cout << CYAN << "[" << &_array[i] << "]" << NC << std::endl;
		}
		class	BadAccessException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return (RED"Bad access of Array"NC);
				};
		};
};

#endif // !_ARRAY_HPP

