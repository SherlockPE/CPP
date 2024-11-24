/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 04:34:49 by flopez-r          #+#    #+#             */
/*   Updated: 2024/11/24 15:05:48 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc <= 1)
		return (PmergeMe::print_error("Invalid arguments"));
	try
	{
		PmergeMe	rev_polish;

		for (size_t i = 1; argv[i]; i++)
			rev_polish.insert(argv[i]);
		rev_polish.start();
	
	} catch (std::exception &e) {
		std::cout << RED << e.what() << NC << std::endl;
	}
}
