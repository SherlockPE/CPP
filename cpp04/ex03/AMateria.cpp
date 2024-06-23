/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:18:30 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/23 16:56:23 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*					Constructors					*/
AMateria::AMateria(void) : m_type("Unknown")
{
	std::cout << GREEN << "AMateria Default constructor called\n" << NC;
}

AMateria::AMateria(std::string const & type) : m_type(type)
{
	std::cout << GREEN << "AMateria constructor called\n" << NC;
}

/*					Operators					*/
AMateria	&AMateria::operator=(const AMateria &src)
{
	this->m_type = src.m_type;
	return (*this);
}

/*					Metods					*/
std::string	const & AMateria::getType() const //Returns the materia type
{
	return(m_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Using Amateria\n";
}

/*					Destructor					*/
AMateria::~AMateria(void)
{
	std::cout << RED << "AMateria Destructor called\n" << NC;
}
