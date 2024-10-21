#include "B.hpp"

// CONSTRUCTORS AND DESTRUCTORS-------------------------------------------------
B::B(void)
{
	std::cout << GREEN "B default constructor called" NC << std::endl;
}

B::B(B const& other)
{
	std::cout << GREEN "B copy constructor called" NC << std::endl;
	*this = other;
}

B::~B(void)
{
	std::cout << RED "B destructor called" NC << std::endl;
}

// OPERATORS--------------------------------------------------------------------
B& B::operator=(B const& other)
{
	if (this == &other){
		return (*this);
	}
	// DO THINGS
	return (*this);
}

// METHODS AND MEMBER FUNCTIONS-------------------------------------------------
