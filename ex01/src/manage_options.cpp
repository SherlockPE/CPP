/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_options.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:27:52 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/05 14:39:14 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

int	manage_options(std::string input, contact *phone_list, int *end, int *index)
{
	input = string_upper(input);
	std::cout << "Haz elegido : " << YELLOW << input << RESET << "\n";

	//Comparación
	if (!ft_strcmp(input, "ADD"))
		add_contact(phone_list, index);
	else if (!ft_strcmp(input, "SEARCH"))
		search_contacts(phone_list, index);
	else if (!ft_strcmp(input, "EXIT") || !ft_strcmp(input, "Q"))
	{
		*end = TRUE;
	 	print_col("Saliendo......\n", MAGENTA);
	}
	else
	{
	 	print_col("Por favor ingrese un input valido\n", MAGENTA);
		return (1);
	}
	return (0);
}
