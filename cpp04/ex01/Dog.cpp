/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 12:59:46 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/21 15:00:00 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* 					Constructor					 */
Dog::Dog(void) : _brain(new Brain)
{
	std::cout << "Dog 🐕 constructor called\n";
	// _brain = new Brain();
	this->type = "Dog";
}
Dog::Dog(const Dog &src)
{
	std::cout << "Copy Dog 🐕 constructor called\n";
	*this = src;
}

/*					Metods						*/
void	Dog::makeSound(void) const
{
	std::cout << "*Woof Woof 🐕!*\n";
}

void	Dog::setIdeas(std::string idea, int position)
{
	_brain->setIdeas(idea, position);
}
void	Dog::printIdeas(void)
{
	_brain->printIdeas();
}

/* 					Operator					 */
Dog	&Dog::operator=(const Dog &src)
{
	this->type = src.type;
	_brain = new Brain(*src._brain);
	return (*this);
}

/* 					Destructor					 */
Dog::~Dog()
{
	std::cout << "Dog 🐕 Destructor called\n";
	delete _brain;
}
