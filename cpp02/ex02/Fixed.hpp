/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:20:45 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/09 21:51:15 by fabriciolop      ###   ########.fr       */
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
		
		/* 					Constructors					 */
		Fixed(void);
		Fixed(const Fixed &object_to_copy);
		Fixed(const int integer);
		Fixed(const float number);

		~Fixed();
};

std::ostream	&operator<<(std::ostream &os, const Fixed &fixed_p);

#endif