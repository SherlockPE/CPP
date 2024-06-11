/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:33:35 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/11 16:08:04 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


/*					Constructors					*/
//Defaut constructor
Point::Point(void): _x(0), _y(0)
{
	std::cout << "Default constructor called";
}

//Copy constructor
Point::Point(const Point &src)
{
	std::cout << "Copy constructor called";
	(*this) = src;
}

//Const floats constructor
Point::Point(const float x, const float y) : _x(x), _y(y)
{
	std::cout << "Floats constructor called";
}

/*					    Metods  					*/

//Assigment operator
Point	&Point::operator=(const Point &src)
{
	std::cout << "Assign operator called";
	this->_x = src._x;
	this->_y = src._y;
}

//Display the corresponding cords of the actual class
void	Point::display_cords(void)
{
	std::cout << "(" << _x << ", " << _y << ")";
}

//Destructor
Point::~Point(void)
{
	std::cout << "Destructor called";
}
