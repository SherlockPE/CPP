/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 12:59:46 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/15 12:59:59 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* 					Constructor					 */
Dog::Dog(void)
{
	this->type = "Dog";
}
Dog::Dog(const Dog &src)
{
	std::cout << "Copy Dog constructor called\n";
	this->type = src.type;
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
	std::cout << "Dog Destructor called\n";
}
