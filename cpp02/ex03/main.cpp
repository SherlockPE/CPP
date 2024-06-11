/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 21:17:20 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/06/11 12:22:46 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void ) {

	Fixed	a;
	Fixed	b( Fixed( 5.05f ) * Fixed( 2 ) );

	// Fixed	a(1);
	// Fixed	b(2);

	// if (++a == b)
	// 	std::cout << "Entré\n";
	// std::cout << a;
	// // else if (a < b)
	// // 	std::cout << "a es menor\n";
	// // else if (a == b)
	// // 	std::cout << "son iguales\n";

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0; 
}
