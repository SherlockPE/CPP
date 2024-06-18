/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:20:42 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/18 10:20:54 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_num_bits = 8;

//Metods
int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (_fixed_point_val);
}
void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	_fixed_point_val = raw;
}

//Default Constructor
Fixed::Fixed(void) : _fixed_point_val(0)
{
	std::cout << "Default constructor called\n";
}
//Copy Constructor
Fixed::Fixed(const Fixed &object_to_copy)
{
	std::cout << "Copy constructor called\n";
	(*this) = object_to_copy;
}

//Assiggment Operator
Fixed &Fixed::operator=(const Fixed &object_to_copy)
{
	std::cout << "Copy assignment operator called\n";
	_fixed_point_val = object_to_copy.getRawBits();
	return (*this);
}

//Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
