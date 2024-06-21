#include "ICharacter.hpp"
#include <iostream>

// CONSTRUCTORS AND DESTRUCTORS-------------------------------------------------
ICharacter::ICharacter(void) {
    std::cout << GREEN "ICharacter default constructor called" NC << std::endl;
}

ICharacter::ICharacter(ICharacter const &other) {
    std::cout << GREEN "ICharacter copy constructor called" NC << std::endl;
    *this = other;
}

ICharacter::~ICharacter(void) {
    std::cout << RED "ICharacter destructor called" NC << std::endl;
}

// OPERATORS--------------------------------------------------------------------
ICharacter &ICharacter::operator=(ICharacter const &other) {
    if (this == &other){
        return (*this);
    }
    // DO THINGS
    return (*this);
}

// METHODS AND MEMBER FUNCTIONS-------------------------------------------------
