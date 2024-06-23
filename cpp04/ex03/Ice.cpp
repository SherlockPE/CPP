/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:09:25 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/23 13:32:19 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*					Constructors					*/
Ice::Ice(void) : AMateria("ice 🧊")
{
	std::cout << GREEN "Ice 🧊 default constructor called" NC << std::endl;
}

Ice::Ice(Ice const &other)
{
	std::cout << GREEN "Ice 🧊 copy constructor called" NC << std::endl;
	*this = other;
}

/*					Operators					*/
Ice &Ice::operator=(Ice const &other)
{
	if (this == &other){
		return (*this);
	}
	// DO THINGS
	return (*this);
}

/*					Destructor					*/
Ice::~Ice(void) {
	std::cout << RED "Ice 🧊 destructor called" NC << std::endl;
}

/*					Metods					*/
Ice*	Ice::clone() const
{
	Ice *result = new Ice();
	if (!result)
	{
		std::cout << "Fail trying to clone an Ice 🧊 object\n";
		return (NULL);
	}
	return (result);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at <name> *\n";
}
