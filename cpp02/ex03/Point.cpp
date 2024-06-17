/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:33:35 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/17 09:59:15 by fabriciolop      ###   ########.fr       */
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
Point	Point::get_vector(Point	A, Point B)
{
	Point	AB;
	
	AB._x = (B._x - A._x);
	AB._y = (B._y - A._y);
	return (AB);
}

Fixed	Point::get_vector_product(Point A, Point B)
{
	Fixed	result;

	result = ((A._x * B._y) - (B._x * A._y));
	return (result);
}

Fixed	Point::triangle_area(Point const a, Point const b, Point const c)
{
	Point	AB = get_vector(a, b);
	Point	BC = get_vector(b, c);
	Fixed	result = get_vector_product(AB, BC);

	return (result / 2);
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
