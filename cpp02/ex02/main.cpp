/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 21:17:20 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/06/10 10:58:42 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void ) {

	// Fixed	a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	Fixed	a(10);
	Fixed	b(0.5f);

	std::cout << a - b << "\n";
	

	// if (a > b)
	// 	std::cout << "a es mayor\n";
	// else if (a < b)
	// 	std::cout << "a es menor\n";
	// else if (a.toInt() == b)
	// 	std::cout << "son iguales\n";
	
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	return 0; 
}
