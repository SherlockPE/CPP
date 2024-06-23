#include "Cure.hpp"

/*					Constructors					*/
Cure::Cure(void)
{
	std::cout << GREEN "Cure 🚑 default constructor called" NC << std::endl;
}

Cure::Cure(Cure const &other)
{
	std::cout << GREEN "Cure 🚑 copy constructor called" NC << std::endl;
	*this = other;
}

/*					Operators					*/
Cure &Cure::operator=(Cure const &other)
{
	if (this == &other){
		return (*this);
	}
	// DO THINGS
	return (*this);
}

/*					Destructor					*/
Cure::~Cure(void)
{
	std::cout << RED "Cure 🚑 destructor called" NC << std::endl;
}

/*					Metods					*/
Cure*	Cure::clone() const
{
	Cure	*result = new Cure();
	if (!result)
	{
		std::cout << RED << "Fail trying to clone an Cure 🧊 object\n" << NC;
		return (NULL);
	}
	return (result);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* Heals <name>'s wounds*\n";
}
