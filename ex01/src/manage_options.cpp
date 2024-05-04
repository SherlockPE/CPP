/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_options.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:27:52 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/04 14:20:50 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	string_upper(std::string *string)
{
	int	i;
	char *str2;

	i = 0;
	str2 = (char *)string;
	while (str2[i])
	{
		if (str2[i] >= 'a' && str2[i] <= 'z')
			str2[i] = str2[i] - 32;
		i++;
	}
	*string = (std::string)str2;
}

int	manage_options(std::string input, contact *phone_list, int *end, int *index)
{
	string_upper(&input);
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
