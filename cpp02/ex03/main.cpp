/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 21:17:20 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/06/17 10:19:32 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main( void ) {

	Point	a(2.1f, 3.38f);
	Point	b(5.27, 1.27f);
	Point	c(6.19f, 5.5f);
	Point	point(4.53f, 3.65f);

	a.display_cords();
	b.display_cords();
	c.display_cords();

	if (bsp(a, b, c, point))
		std::cout << "El punto SI pertenece al triangulo\n";
	else
		std::cout << "El punto NO pertenece al triangulo\n";
	
	return 0; 
}
