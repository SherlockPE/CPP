/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 04:34:49 by flopez-r          #+#    #+#             */
/*   Updated: 2024/11/24 04:57:22 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (PmergeMe::print_error("Invalid arguments"));
	try
	{
		PmergeMe	rev_polish(argv[1]);
	
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
