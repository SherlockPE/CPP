/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:33:35 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/13 18:03:24 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


/*					Constructors					*/
//Defaut constructor
Point::Point(void): _x(0), _y(0)
{
	std::cout << "Default constructor called" << std::endl;
}

//Copy constructor
Point::Point(const Point &src)
{
	std::cout << "Copy constructor called" << std::endl;
	(*this) = src;
}

//Const floats constructor
Point::Point(const float x, const float y) : _x(x), _y(y)
{
	std::cout << "Floats constructor called" << std::endl;
}

/*					    Metods  					*/

//formula = 1/2 . |​x1​(y2​−y3​) + x2​(y3​−y1​) + x3​(y1​−y2​)∣
Fixed	Point::triangle_area(Point const a, Point const b, Point const c)
{
	// Fixed	result;

	// result = a._x * a._y
}


//Assigment operator
Point	&Point::operator=(const Point &src)
{
	std::cout << "Assign operator called" << std::endl;
	this->_x = src._x;
	this->_y = src._y;
	return (*this);
}

//Display the corresponding cords of the actual class
void	Point::display_cords(void)
{
	std::cout << "(" << _x << ", " << _y << ")" << std::endl;
}

//Destructor
Point::~Point(void)
{
	std::cout << "Destructor called" << std::endl;
}
