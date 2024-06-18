/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 21:17:20 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/06/18 10:34:59 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void ) {

	Fixed	a;
	Fixed	b( Fixed( 5.05f ) * Fixed( 2 ) );

	// Fixed	a(1);
	// Fixed	b(2);

	// if (a == b)
	// 	std::cout << "a no es igual a 2\n";
	// else if (a < b)
	// 	std::cout << "a es menor  que b\n";
	// else if (a == b)
	// 	std::cout << "son iguales\n";

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0; 
}
