/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:41:37 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/12 18:47:54 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>


//formula = 1/2 . |​x1​(y2​−y3​) + x2​(y3​−y1​) + x3​(y1​−y2​)∣
Fixed	get_triangle_area(Point const a, Point const b, Point const c)
{
	// Fixed	result;

	// result = ();
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed   total_area;
	Fixed   area1;
	Fixed   area2;
	Fixed   area3;

	total_area = get_triangle_area(a, b, c);
	area1 = get_triangle_area(a, b, point);
	area2 = get_triangle_area(a, point, c);
	area3 = get_triangle_area(c, point, b);
}
