/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:20:42 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/09 21:29:01 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_num_bits = 8;

/* 					Constructors					 */
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

//Int constructor
Fixed::Fixed(const int integer) : _fixed_point_val(integer<<_num_bits)
{
	std::cout << "Int constructor called\n";
}

//Float constructor
Fixed::Fixed(const float number) : _fixed_point_val(number * (1 << _num_bits))
{
	std::cout << "Float constructor called\n";
}

/* 						Metods						 */
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

// Converts the fixed-point value to a floating-point value.
float Fixed::toFloat( void ) const
{	
	float	result;

	result = static_cast<float>(_fixed_point_val); 
	return (result / (1 << _num_bits));
}

// Converts the fixed-point value to an integer value.
int Fixed::toInt( void ) const
{
	return (roundf(toFloat()));
}

//Assiggment Operator
Fixed &Fixed::operator=(const Fixed &object_to_copy)
{
	std::cout << "Copy assignment operator called\n";
	_fixed_point_val = object_to_copy._fixed_point_val;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &fixed_p)
{
	os << fixed_p.toFloat();
	return (os);
}

//Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
