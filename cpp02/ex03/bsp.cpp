/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:41:37 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/18 12:30:29 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool  bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed   total_area;
	Fixed   area1;
	Fixed   area2;
	Fixed   area3;

	total_area = Point::triangle_area(a, b, c);
	area1 = Point::triangle_area(a, b, point);
	area2 = Point::triangle_area(a, point, c);
	area3 = Point::triangle_area(c, point, b);

	if (area1 + area2 + area3 == total_area)
		return (true);
	return (false);
}
