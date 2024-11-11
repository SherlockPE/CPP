/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 08:49:08 by flopez-r          #+#    #+#             */
/*   Updated: 2024/11/11 10:48:41 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <vector>
#include <algorithm>

int	parse(int argc)
{
	if (argc < 2 || argc >= 3)
	{
		std::cout << RED "Error: \nUsement: [program] [input_file]" NC << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

int main (int argc, char **argv)
{
	if (parse(argc))
		return (EXIT_FAILURE);

	// OPENING INPUT ARCHIVE
	try
	{
		BitcoinExchange	bitcoin_convertion(argv[1]);
		// bitcoin_convertion.print_database();
		// bitcoin_convertion.print_input_file();
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << NC << std::endl;
	}
	
	// // PRINTING TEST
	// std::getline(input_file, input, '\0');
	// std::getline(data_file, data_base, '\0');

	// std::cout << YELLOW << data_base << NC << std::endl;
	// std::cout << GREEN << input << NC << std::endl;


	return (EXIT_SUCCESS);
}	