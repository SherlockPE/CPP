/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_int.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:06:04 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/09 14:18:09 by fabriciolop      ###   ########.fr       */
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
			std::cout << " is not a number" << std::endl;
		}
	}
	return (result);
}


// int     get_int(std::string input, int max_index)
// {
// 	int num;

// 	while (true)
// 	{
// 		std::cout << input;
// 		std::cin >> num;
// 		if (!std::cin)
// 		{
// 			std::cin.clear();
// 			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
// 		}
// 		// else if (num < 0 || num > max_index)
// 		// 	std::cout << "Sorry there's no index for you";
// 		else
// 			break;
// 	}
// 	return (num);
// }
