/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:00:40 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/21 18:00:11 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

/* 					Constructor					 */
Cat::Cat(void)
{
	std::cout << "Cat 😺 constructor called\n";
	_brain = new Brain();
	this->type = "Cat";
}
Cat::Cat(const Cat &src)
{
	std::cout << "Copy Cat 😺 constructor called\n";
	*this = src;
}

/*					Metods						*/
void		Cat::makeSound(void) const
{
	std::cout << "*Miau, Miau, Miau 😺!\n";
}

void	Cat::setIdeas(std::string idea, int position)
{
	_brain->setIdeas(idea, position);
}

void	Cat::printIdeas(void)
{
	_brain->printIdeas();
}


/* 					Operator					 */
Cat	&Cat::operator=(const Cat &src)
{
	this->type = src.type;
	delete _brain;
	_brain = new Brain(*src._brain);
	return (*this);
}

/* 					Destructor					 */
Cat::~Cat()
{
	std::cout << "Cat 😺 Destructor called\n";
	delete _brain;
}
