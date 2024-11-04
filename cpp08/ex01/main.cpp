/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:05:00 by flopez-r          #+#    #+#             */
/*   Updated: 2024/11/04 16:33:55 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>


int	main(int argc, char **argv)
{
	size_t max_size;
	{
		max_size = 5;
		std::cout << WHITE << "SUBJECT TEST" << NC << ::std::endl;
		try
		{
			Span sp = Span(max_size);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			sp.print_list();
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << "\n";
		}
	}
	{
		std::cout << WHITE << "OWN TEST" << NC << ::std::endl;
		try
		{
			if (argc != 4)
			{
				std::cout	<< RED << "You need to enter parameters\n"
							<< "Usement: \n"
							<< "[program] [list_size] [start] [end] \n" << NC;
				return 1;
			}

			max_size = atoi(argv[1]);
			Span sp = Span(max_size);

			sp.addManyNumbers(atoi(argv[2]), atoi(argv[3]));
			sp.print_list();
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << "\n";
		}
	}
	return 0;
}

