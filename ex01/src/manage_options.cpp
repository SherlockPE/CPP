/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_options.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:27:52 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/03 18:52:19 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

int	manage_options(char *input, contact *phone_list, int *end)
{
	if (!strcmp(input, "ADD"))
		add_contact(phone_list);
	else if (!strcmp(input, "SEARCH"))
		display_contacts(phone_list);
	else if (!strcmp(input, "EXIT"))
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