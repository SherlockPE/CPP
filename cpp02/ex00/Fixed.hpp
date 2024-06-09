/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 13:20:45 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/09 15:36:44 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_fixed_point_val;
		static const int	_num_bits;
	public:
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed(void);
		Fixed(const Fixed &object_to_copy);
		Fixed &operator=(const Fixed &object_to_copy);
		~Fixed();
};

#endif