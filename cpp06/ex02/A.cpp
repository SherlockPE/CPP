#include "A.hpp"

// CONSTRUCTORS AND DESTRUCTORS-------------------------------------------------
A::A(void)
{
	std::cout << GREEN "A default constructor called" NC << std::endl;
}

A::A(A const& other)
{
	std::cout << GREEN "A copy constructor called" NC << std::endl;
	*this = other;
}

A::~A(void)
{
	std::cout << RED "A destructor called" NC << std::endl;
}

// OPERATORS--------------------------------------------------------------------
A& A::operator=(A const& other)
{
	if (this == &other){
		return (*this);
	}
	// DO THINGS
	return (*this);
}

// METHODS AND MEMBER FUNCTIONS-------------------------------------------------
