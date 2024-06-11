/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:20:42 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/11 12:29:19 by flopez-r         ###   ########.fr       */
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
Fixed::Fixed(const float number) : _fixed_point_val(roundf(number * (1 << _num_bits)))
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

/* 					Static Metods					 */
Fixed	&Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}
	
Fixed	&Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}

const Fixed	&Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}
	
const Fixed	&Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}

/* 					Comparison operators					 */
bool	Fixed::operator>(const Fixed &obj1) const
{
	if ((*this)._fixed_point_val > obj1._fixed_point_val)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &obj1) const
{
	if (this->_fixed_point_val >= obj1._fixed_point_val)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &obj1) const
{
	if (this->_fixed_point_val < obj1._fixed_point_val)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &obj1) const
{
	if (this->_fixed_point_val <= obj1._fixed_point_val)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &obj1) const
{
	if (this->_fixed_point_val == obj1._fixed_point_val)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &obj1) const
{
	if (this->_fixed_point_val != obj1._fixed_point_val)
		return (true);
	return (false);
}


/* 					Arithmetic operator					 */
Fixed 	Fixed::operator+(const Fixed &obj2)
{
	return (this->toFloat() + obj2.toFloat());
}

Fixed 	Fixed::operator-(const Fixed &obj2)
{
	return (this->toFloat() - obj2.toFloat());
}

Fixed 	Fixed::operator*(const Fixed &obj2)
{
	return (this->toFloat() * obj2.toFloat());
}

Fixed 	Fixed::operator/(const Fixed &obj2)
{
	if (obj2._fixed_point_val == 0)
	{
		std::cout << "division by zero\n";
		return (0);
	}
	return (this->toFloat() / obj2.toFloat());
}

/* 					in(de)crement-prefix			 */
Fixed	&Fixed::operator++(void)
{
	this->_fixed_point_val++;
	return *this;
}

Fixed	&Fixed::operator--(void)
{
	this->_fixed_point_val++;
	return *this;
}

/* 					in(de)crement-postfix			 */
Fixed	Fixed::operator++(int)
{
	Fixed	old = *this;
	_fixed_point_val++;
	return (old);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old = *this;
	_fixed_point_val--;
	return (old);
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
