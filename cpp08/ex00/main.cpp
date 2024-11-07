/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:43:17 by flopez-r          #+#    #+#             */
/*   Updated: 2024/11/07 16:27:27 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <cstdlib>
#include <vector>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "It is neccesary that you looking for parameter\n";
		return (EXIT_FAILURE);
	}

	std::vector<int> numbers;

	//RESERVE
	numbers.reserve(10);
	for (size_t i = 1; i <= 10; i++)
		numbers.push_back(i);

	//PRINT
	std::cout << "In List : ";
	for (size_t i = 0; i < numbers.size(); i++)
		std::cout << "["<< numbers[i] << "] ";
	std::cout << "\nNumber " << std::atoi(argv[1]) << ": ";

	try
	{
		easyfind(numbers, std::atoi(argv[1]));
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << "\n";
	}
	return 0;
}
