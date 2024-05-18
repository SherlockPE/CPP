/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:09:46 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/18 18:51:06 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

static std::string	manipulate_tabs(std::string input)
{
	int	i;

	i = 0;
	while (input[i])
	{
		if (input[i] == '\t')
			input[i] = ' ';
		i++;
	}
	return (input);
}

std::string	get_input(std::string message)
{
	std::string input;

	while (1)
	{
		std::cout << message << YELLOW;
		std::getline(std::cin, input);
		if (std::cin.eof())
			PhoneBook::exit_program(0);
		std::cout << RESET;
		if (!input.empty())
			break;
		else
			print_col("Empty input, please try again\n", RED);
	}
	return (manipulate_tabs(input));
}
