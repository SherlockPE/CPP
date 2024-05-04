/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_options.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:27:52 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/04 14:44:30 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

std::string	string_upper(std::string string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] >= 'a' && string[i] <= 'z')
			string[i] = string[i] - 32;
		i++;
	}
	return (string);
}

int	manage_options(std::string input, contact *phone_list, int *end, int *index)
{
	input = string_upper(input);
	std::cout << "Haz elegido la opción " << YELLOW << input << RESET << "\n";
	if (!ft_strcmp(input, "ADD"))
		add_contact(phone_list, index);
	else if (!ft_strcmp(input, "SEARCH"))
		display_contacts(phone_list, index);
	else if (!ft_strcmp(input, "EXIT") || !ft_strcmp(input, "Q"))
	{
		*end = TRUE;
		std::cout << "Saliendo......\n";
	}
	else
	{
		std::cout << "Por favor ingrese un input valido\n";
		return (1);
	}
	return (0);
}
