#include "ICharacter.hpp"

/*					Constructors					*/
ICharacter::ICharacter(void) {
	std::cout << GREEN "ICharacter default constructor called" NC << std::endl;
}

ICharacter::ICharacter(ICharacter const &other) {
	std::cout << GREEN "ICharacter copy constructor called" NC << std::endl;
	*this = other;
}

/*					Operators					*/
ICharacter &ICharacter::operator=(ICharacter const &other) {
	if (this == &other){
		return (*this);
	}
	// DO THINGS
	return (*this);
}

/*					Destructor					*/
ICharacter::~ICharacter(void) {
	std::cout << RED "ICharacter destructor called" NC << std::endl;
}

// METHODS AND MEMBER FUNCTIONS-------------------------------------------------
