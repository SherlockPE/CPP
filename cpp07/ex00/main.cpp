/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:56:04 by flopez-r          #+#    #+#             */
/*   Updated: 2024/10/21 18:23:48 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	{
		std::cout << YELLOW << "-------Subject test-------\n" << NC;
		int a = 2;
		int b = 3;

		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";

		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
		// Should output:
		// a = 3, b = 2
		// min(a, b) = 2
		// max(a, b) = 3
		// c = chaine2, d = chaine1
		// min(c, d) = chaine1
		// max(c, d) = chaine2
		// 6
	}
	{
		int a = 0;
		int b = 42;
		int c = 42;
		
		std::cout << YELLOW << "Prueba con ints\n" << NC;
		std::cout	<< "a: " << a << "\n"
					<< "b: " << b << "\n"
					<< "c: " << c << "\n";
		
		std::cout << GREEN <<  "- Haciendo un swap de a y c\n" << NC;
		swap(a, c);
		std::cout	<< "a: " << a << "\n"
					<< "b: " << b << "\n"
					<< "c: " << c << "\n";
		
		std::cout << GREEN <<  "- Quién es menor entre a y c?\n" << NC;
		std::cout << min(a, c) << std::endl ;
		std::cout << GREEN <<  "- Quién es mayor entre a y c?\n" << NC;
		std::cout << max(a, c) << std::endl ;
		std::cout << GREEN <<  "- Son iguales a y b?\n" << NC;
		std::cout << max(a, b) << std::endl;
		std::cout << min(a, b) << std::endl;
	}
	{
		std::cout << YELLOW << "\nPrueba con doubles\n" << NC;

		double a = 0;
		double b = 42;
		double c = 42.7;
		
		std::cout	<< "a: " << a << "\n"
					<< "b: " << b << "\n"
					<< "c: " << c << "\n";
		
		std::cout << GREEN <<  "- Haciendo un swap de a y c\n" << NC;
		swap(a, c);
		std::cout	<< "a: " << a << "\n"
					<< "b: " << b << "\n"
					<< "c: " << c << "\n";
		
		std::cout << GREEN <<  "- Quién es menor entre a y b?\n" << NC;
		std::cout << min(a, b) << std::endl ;
		std::cout << GREEN <<  "- Quién es mayor entre a y b?\n" << NC;
		std::cout << max(a, b) << std::endl ;
		std::cout << GREEN <<  "- Son iguales a y b?\n" << NC;
		std::cout << max(a, b) << std::endl;
		std::cout << min(a, b) << std::endl;
	}
	{
		std::cout << YELLOW << "Prueba con floats\n" << NC;

		double a = 0;
		double b = 42.02;
		double c = 42.01;
		
		std::cout	<< "a: " << a << "\n"
					<< "b: " << b << "\n"
					<< "c: " << c << "\n";
		
		std::cout << GREEN <<  "- Haciendo un swap de a y c\n" << NC;
		swap(a, c);
		std::cout	<< "a: " << a << "\n"
					<< "b: " << b << "\n"
					<< "c: " << c << "\n";
		
		std::cout << GREEN <<  "- Quién es menor entre a y b?\n" << NC;
		std::cout << min(a, b) << std::endl ;
		std::cout << GREEN <<  "- Quién es mayor entre a y b?\n" << NC;
		std::cout << max(a, b) << std::endl ;
		std::cout << GREEN <<  "- Son iguales a y b?\n" << NC;
		std::cout << max(a, b) << std::endl;
		std::cout << min(a, b) << std::endl;
	}
	return 0;
}
