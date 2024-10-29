/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:14:02 by flopez-r          #+#    #+#             */
/*   Updated: 2024/10/29 17:49:52 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void	print_function(T &c)
{
	std::cout << c << "\n";
}

int	main(void)
{
	int array_of_ints[6] = {1, 2, 3, 4, 5, 6};
	char array_of_char[6] = {'1', '2', '3', '4', '5', '6'};
	std::string array_of_string[6] = {"one", "two", "thre", "four", "five", "six"};

	std::cout << "--------------------\n";
	iter(array_of_ints, 6, print_function);
	std::cout << "--------------------\n";
	iter(array_of_char, 6, print_function);
	std::cout << "--------------------\n";
	iter(array_of_string, 6, print_function);
	std::cout << "--------------------\n";
}