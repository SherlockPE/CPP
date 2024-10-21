#include "Base.hpp"

// CONSTRUCTORS AND DESTRUCTORS-------------------------------------------------
Base::Base(void)
{
	std::cout << GREEN "Base default constructor called" NC << std::endl;
}

Base::Base(Base const& other)
{
	std::cout << GREEN "Base copy constructor called" NC << std::endl;
	*this = other;
}

Base::~Base(void)
{
	std::cout << RED "Base destructor called" NC << std::endl;
}

// OPERATORS--------------------------------------------------------------------
Base& Base::operator=(Base const& other)
{
	if (this == &other){
		return (*this);
	}
	// DO THINGS
	return (*this);
}

// METHODS AND MEMBER FUNCTIONS-------------------------------------------------
