/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:00:40 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/15 14:58:50 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

/* 					Constructor					 */
Cat::Cat(void)
{
	this->type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &src)
{
	std::cout << "Copy Cat constructor called\n";
	this->type = src.type;
}

/*					Metods						*/
void		Cat::makeSound(void) const
{
	std::cout << "*Miau, Miau, Miau!\n";
}

/* 					Operator					 */
Cat	&Cat::operator=(const Cat &src)
{
	this->type = src.type;
	return (*this);
}

/* 					Destructor					 */
Cat::~Cat()
{
	std::cout << "Cat Destructor called\n";
	delete	_brain;
}
