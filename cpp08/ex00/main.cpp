/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:43:17 by flopez-r          #+#    #+#             */
/*   Updated: 2024/11/04 13:02:04 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "easyfind.hpp"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>
#include <deque>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return 1;

	int	array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	array_len = sizeof(array) / sizeof(int);
	std::vector<int>	vect(array, array + array_len);
	std::list<int>	lst(array, array + array_len);
	std::deque<int>	dqe(array, array + array_len);

	try {
		easyfind(vect, std::atoi(argv[1]));
		easyfind(lst, std::atoi(argv[1]));
		easyfind(dqe, std::atoi(argv[1]));
	} catch (std::exception &ex) {
		std::cout << ex.what() << "\n";
	}
	return 0;
}

// #include "easyfind.hpp"
// #include <cstddef>
// #include <exception>
// #include <iostream>
// #include <ostream>

// #include <cstdlib>

// int	main(void)
// {
// 	try
// 	{
// 		std::vector<int> numbers;
// 		std::cout << "Size of list --> " << numbers.size() << "\n";
		
// 		//RESERVE
// 		numbers.reserve(10);
// 		for (size_t i = 1; i <= 10; i++) {
// 			numbers.push_back(i);
// 		}

// 		//PRINT
// 		for (size_t i = 0; i < numbers.size(); i++) {
// 			std::cout << "["<< numbers[i] << "] ";
// 		}
// 		std::cout << "\n";

// 		easyfind(numbers, 2);
// 	}
// 	catch (std::exception & e)
// 	{
// 		std::cerr << e.what() << "\n";
// 		std::cout << RED << "Catched exception" << NC << std::endl;
// 	}
// 	return (EXIT_SUCCESS);
// }
