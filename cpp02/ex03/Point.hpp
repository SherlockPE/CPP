/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:33:46 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/17 10:15:46 by fabriciolop      ###   ########.fr       */
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

		/*					    Metods  					*/
		static Point			get_vector(Point	A, Point B);
		static Fixed			get_vector_product(Point A, Point B);
		static Fixed	triangle_area(Point const a, Point const b, Point const c);
		Point   		&operator=(const Point &src);
		void			display_cords(void);
		~Point(void);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif