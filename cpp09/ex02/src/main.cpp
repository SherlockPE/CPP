/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 04:34:49 by flopez-r          #+#    #+#             */
/*   Updated: 2025/03/31 16:51:15 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc <= 1)
		return (PmergeMe::print_error("Invalid arguments"));
	try
	{
		PmergeMe	merge_alg;
		std::stringstream	input;

		for (size_t i = 1; argv[i]; i++)
			input << argv[i] << " ";
		merge_alg.start(input);
	
	} catch (std::exception &e) {
		std::cout << RED << e.what() << NC << std::endl;
	}
}
