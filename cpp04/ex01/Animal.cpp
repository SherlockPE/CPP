/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 12:04:36 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/21 12:20:19 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* 					Constructor					 */
Animal::Animal(void) : type("")
{
	std::cout << "Animal 🌲 Default constructor called\n";
}

/*					Metods						*/
void	Animal::makeSound(void) const
{
	std::cout << "*Animal 🌲 sounds*\n";
}

std::string	Animal::getType(void) const
{
	return (type);
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal 🌲 Copy constructor called\n";
	this->type = src.type;
}

/* 					Operator					 */
Animal &Animal::operator=(const Animal &src)
{
	this->type = src.type;
	return (*this);
}

/* 					Destructor					 */
Animal::~Animal(void)
{
	std::cout << "Animal 🌲 Destructor called\n";
}
