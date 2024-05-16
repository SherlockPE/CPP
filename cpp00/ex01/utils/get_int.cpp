/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_int.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:06:04 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/16 13:36:30 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

bool ft_is_all_digit(std::string input)
{
	int		i;

	i = 0;
	while (input[i])
	{
		if (input[i] < '0' || input[i] > '9')
			return (false);
		i++;
	}
	return (true);
}

std::string	get_int(std::string input)
{
	std::string result;

	while (true)
	{
		result = get_input(input);
		if (ft_is_all_digit(result))
			break;
		else
		{
			std::cout << RED << "Error: [" << result << "]" << RESET;
			std::cout << " is not a valid number" << std::endl;
		}
	}
	return (result);
}
