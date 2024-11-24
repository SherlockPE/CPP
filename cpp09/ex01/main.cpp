/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 04:34:49 by flopez-r          #+#    #+#             */
/*   Updated: 2024/11/24 09:58:03 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (RPN::print_error("Invalid arguments"));
	try
	{
		RPN	rev_polish;
		std::string	_storage;

		rev_polish.init(argv[1]);
		rev_polish.start();
	} catch (std::exception &e) {
		std::cout << RED << e.what() << NC << std::endl;
	}
}
