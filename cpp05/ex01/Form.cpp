#include "Form.hpp"

/*					Constructors					*/
Form::Form(void)
{
	std::cout << GREEN "Form default constructor called" NC << std::endl;
}

Form::Form(Form const &other)
{
	std::cout << GREEN "Form copy constructor called" NC << std::endl;
	*this = other;
}

/*					Operators					*/
Form &Form::operator=(Form const &other)
{
	if (this == &other){
		return (*this);
	}
	// DO THINGS
	return (*this);
}

/*					Destructor					*/
Form::~Form(void) {
	std::cout << RED "Form destructor called" NC << std::endl;
}

/*					Metods					*/
