/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:33:46 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/11 16:08:33 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
	private:
		Fixed _x;
		Fixed _y;
	public:
		/*					Constructors					*/
		Point(void);
		Point(const Fixed &src);
		Point(const float x, const float y);
		Fixed   &operator=(const Fixed &src);

		/*					    Metods  					*/
		void	display_cords(void);
		~Point(void);
};

#endif