/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 08:49:08 by flopez-r          #+#    #+#             */
/*   Updated: 2024/11/15 18:04:53 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int argc, char **argv)
{
	if (argc < 2 || argc >= 3)
	{
		std::cout << RED "Error: \nUsement: [program] [input_file]" NC << std::endl;
		return (EXIT_FAILURE);
	}
	try
	{
		BitcoinExchange	bitcoin_convertion;

		bitcoin_convertion.open_files(argv[1], "data.csv");
		bitcoin_convertion.start_change();
	}
	catch (std::exception &e)
	{
		std::cout << RED << e.what() << NC << std::endl;
	}
	return (EXIT_SUCCESS);
}	