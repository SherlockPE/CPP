/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:33:46 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/13 17:48:08 by flopez-r         ###   ########.fr       */
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
		Point(const Point &src);
		Point(const float x, const float y);
		Point   &operator=(const Point &src);

		/*					    Metods  					*/
		void	display_cords(void);
		Fixed	triangle_area(Point const a, Point const b, Point const c);
		~Point(void);
};

#endif