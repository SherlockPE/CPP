#include "C.hpp"

// CONSTRUCTORS AND DESTRUCTORS-------------------------------------------------
C::C(void)
{
	std::cout << GREEN "C default constructor called" NC << std::endl;
}

C::C(C const& other)
{
	std::cout << GREEN "C copy constructor called" NC << std::endl;
	*this = other;
}

C::~C(void)
{
	std::cout << RED "C destructor called" NC << std::endl;
}

// OPERATORS--------------------------------------------------------------------
C& C::operator=(C const& other)
{
	if (this == &other){
		return (*this);
	}
	// DO THINGS
	return (*this);
}

// METHODS AND MEMBER FUNCTIONS-------------------------------------------------
