/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:58:12 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/15 13:58:16 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* 					Constructor					 */
WrongAnimal::WrongAnimal(void) : type("")
{
	std::cout << "WrongAnimal Default constructor called\n";
}

/*					Metods						*/
void	WrongAnimal::makeSound(void) const
{
	std::cout << "*WrongAnimal sounds*\n";
}

std::string	WrongAnimal::getType(void) const
{
	return (type);
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "WrongAnimal Copy constructor called\n";
	this->type = src.type;
}

/* 					Operator					 */
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	this->type = src.type;
	return (*this);
}

/* 					Destructor					 */
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor called\n";
}
