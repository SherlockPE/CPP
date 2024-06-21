/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 12:59:46 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/21 13:17:56 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* 					Constructor					 */
Dog::Dog(void)
{
	std::cout << "Dog 🐕 constructor called\n";
	this->type = "Dog";
}
Dog::Dog(const Dog &src)
{
	std::cout << "Copy Dog 🐕 constructor called\n";
	this->type = src.type;
}

/*					Metods						*/
void	Dog::makeSound(void) const
{
	std::cout << "*Woof Woof 🐕!*\n";
}

/* 					Operator					 */
Dog	&Dog::operator=(const Dog &src)
{
	this->type = src.type;
	return (*this);
}

/* 					Destructor					 */
Dog::~Dog()
{
	std::cout << "Dog 🐕 Destructor called\n";
}
