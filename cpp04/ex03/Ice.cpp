/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:09:25 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/24 11:39:55 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*					Constructors					*/
Ice::Ice(void) : AMateria("ice")
{
	std::cout << GREEN "Ice 🧊 default constructor called" NC << std::endl;
}

Ice::Ice(Ice const &other)
{
	(void)other;
	std::cout << GREEN "Ice 🧊 copy constructor called" NC << std::endl;
	// *this = other;
}

/*					Operators					*/
Ice &Ice::operator=(Ice const &other)
{
	(void)other;
	return (*this);
}

/*					Destructor					*/
Ice::~Ice(void)
{
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
	std::cout	<< "* shoots an " << CYAN "Ice bolt ❄️ " << NC 
				<< "at " << target.getName() << " *\n";
}
