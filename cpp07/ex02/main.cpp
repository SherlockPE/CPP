/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:52:24 by flopez-r          #+#    #+#             */
/*   Updated: 2024/10/29 16:55:36 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstddef>
#include <iterator>


int main(void)
{
	size_t				size_list = 7;
	std::cout << WHITE <<  "\n--------TYPES TEST--------" << NC << std::endl;

	// TYPES TEST
	{
		// INT LIST
		{
			std::cout << WHITE <<  "\nINT LIST" << NC << std::endl;
			Array<int>					int_list(size_list);
			
			// Prueba del operador de subíndice de matriz
			for (size_t i = 0; i < int_list.size(); i++)
				int_list[i] = i;
			int_list.print_list();
		}
		// STRING LIST
		{
			std::cout << WHITE <<  "\nSTRING LIST" << NC << std::endl;
			Array<std::string>			str_list(size_list);

			for (size_t i = 0; i < str_list.size(); i++)
				str_list[i] = "hola";
			str_list.print_list();
		}
		// DOUBLE LIST
		{
			std::cout << WHITE <<  "\nDOUBLE LIST" << NC << std::endl;
			Array<double>				int_list(size_list);

			// Prueba del operador de subíndice de matriz
			for (size_t i = 0; i < int_list.size(); i++)
				int_list[i] = i + 0.2574;
			int_list.print_list();
		}
		// FLOAT LIST
		{
			std::cout << WHITE <<  "\nFLOAT LIST" << NC << std::endl;
			Array<float>				int_list(size_list);

			// Prueba del operador de subíndice de matriz
			for (size_t i = 0; i < int_list.size(); i++)
				int_list[i] = i + 0.1234;
			int_list.print_list();
		}
	}
	// DEEP COPY TEST
	std::cout << WHITE <<  "\n--------COPY'S TEST--------" << NC << std::endl;
	{
		Array<int>	first_int_list(size_list);
		for (size_t i = 0; i < first_int_list.size(); i++)
			first_int_list[i] = i;
		first_int_list.print_list();
		first_int_list.print_memory();
	
		std::cout << WHITE <<  "\nCOPY CONSTRUCTOR TEST" << NC << std::endl;
		Array<int> second_int_list(first_int_list);
		second_int_list.print_list();
		second_int_list.print_memory();

		std::cout << WHITE <<  "\nCOPY ASIGGMENT OPERATOR TEST" << NC << std::endl;
		Array<int> thirth_int_list;

		thirth_int_list = second_int_list;

		thirth_int_list.print_list();
		thirth_int_list.print_memory();
	}
	return (0);
}
