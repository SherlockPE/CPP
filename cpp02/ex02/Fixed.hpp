/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:20:45 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/10 16:21:34 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fixed_point_val;
		static const int	_num_bits;
	public:
		/* 						Metods						 */
		int				getRawBits( void ) const;
		void			setRawBits( int const raw );
		Fixed			&operator=(const Fixed &object_to_copy);
		float			toFloat( void ) const;
		int				toInt( void ) const;

		/*					Comparison operators					*/
		bool		operator>(const Fixed &obj1);
		bool		operator>=(const Fixed &obj1);
		bool		operator<(const Fixed &obj1);
		bool		operator<=(const Fixed &obj1);
		bool		operator==(const Fixed &obj1);
		bool		operator!=(const Fixed &obj1);

		/* 					Arithmetic operator					 */
		Fixed 	operator+(const Fixed &obj2);
		Fixed 	operator-(const Fixed &obj2);
		Fixed 	operator*(const Fixed &obj2);
		Fixed 	operator/(const Fixed &obj2);

		/* 					in(de)crement					 */
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
		// friend void		operator(const Fixed &obj);
		// friend void		operator++(const Fixed &obj);

		/*					Constructors					*/
		Fixed(void);
		Fixed(const Fixed &object_to_copy);
		Fixed(const int integer);
		Fixed(const float number);

		~Fixed();
};

std::ostream	&operator<<(std::ostream &os, const Fixed &fixed_p);

#endif