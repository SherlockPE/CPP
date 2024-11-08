/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 08:49:08 by flopez-r          #+#    #+#             */
/*   Updated: 2024/11/08 11:29:50 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	parse(int argc)
{
	if (argc < 2)
	{
		std::cout << RED "Error: could not open  the file" NC << std::endl;
		return (EXIT_FAILURE);
	}
	else if(argc >= 3)
		std::cout << RED << "Usement: [program] [input_file]" NC << std::endl;
	return (EXIT_SUCCESS);
}

int main (int argc, char **argv)
{
	if (parse(argc))
		return (EXIT_FAILURE);

	// OPENING INPUT ARCHIVE
	// std::string file_name = static_cast<std::string>(argv[1]);
	try {
	// statements
		BitcoinExchange	bitcoin_convertion(argv[1]);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	// std::ifstream	input_file(argv[1]);
	// std::ifstream	data_file("data.csv");
	// std::string		input;
	// std::string		data_base;

	// if (!input_file.is_open())
	// {
	// 	std::cout << RED "Error: could not open the file" NC << std::endl;
	// 	return (EXIT_FAILURE);
	// }
	// if (!data_file.is_open())
	// {
	// 	std::cout << RED "Error: could not open the data base archive" NC << std::endl;
	// 	std::cout << RED "be sure that exist an archive named data.csv" NC << std::endl;
	// 	return (EXIT_FAILURE);
	// }

	// // PRINTING TEST
	// std::getline(input_file, input, '\0');
	// std::getline(data_file, data_base, '\0');

	// std::cout << YELLOW << data_base << NC << std::endl;
	// std::cout << GREEN << input << NC << std::endl;


	return (EXIT_SUCCESS);
}	