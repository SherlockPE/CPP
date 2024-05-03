/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:42:23 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/03 18:08:30 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void get_input(char *string)
{
	std::cout << "Your option: ";
	std::cin >>	string;
}

void string_lower(char *string)
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

void select_option(char *string, int *option)
{
	string_lower(string);
	if (!strcmp(string, "ADD"))
		*option = ADD;
	else if (!strcmp(string, "SEARCH"))
		*option = SEARCH;
	else if (!strcmp(string, "EXIT"))
		*option = EXIT;
	else
		*option = 0;
}

int main(void)
{
	char	string[80];
	int		option;

	option = 0;
	while (1)
	{
		get_input(string);
		select_option(string, &option);
		if (option == 0)
		{
			std::cout << "Por favor ingrese un input valido\n";
			// std::cout << "Desplegando menú...\n";
			continue ;
		}
		else if (option == EXIT)
		{
			std::cout << "Muchas Gracias\n";
			std::cout << "Saliendo......\n";
			break;
		}
	}	
	return (0);
}
