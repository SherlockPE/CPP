/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:20:42 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/29 15:12:04 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Metods
int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
}
void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
}

//Default Constructor
Fixed::Fixed(void) : _fixed_point(0)
{
	std::cout << "Default constructor called\n";
}
//Copy Constructor
Fixed::Fixed(Fixed &object_to_copy)
{
	_fixed_point = object_to_copy.getRawBits();
	std::cout << "Copy constructor called\n";
}

//Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
