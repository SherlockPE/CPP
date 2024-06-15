/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:00:40 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/15 14:11:58 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

/* 					Constructor					 */
WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "Copy WrongCat constructor called\n";
	this->type = src.type;
}

/*					Metods						*/
void		WrongCat::makeSound(void) const
{
	std::cout << "*Maon maon maon*\n";
}

/* 					Operator					 */
WrongCat	&WrongCat::operator=(const WrongCat &src)
{
	this->type = src.type;
	return (*this);
}

/* 					Destructor					 */
WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called\n";
}
