/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:09:46 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/03 18:30:35 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	string_lower(char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] >= 'a' || string[i] <= 'a')
			string[i] = string[i] - 32;
		i++;
	}
}

void	get_input(char *input)
{
	std::cout << "Your option: ";
	std::cin >> input;
	string_lower(input);
}
