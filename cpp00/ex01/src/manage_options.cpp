/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_options.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:27:52 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/18 19:39:44 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	manage_options(PhoneBook *agenda, std::string input)
{
	input = string_upper(input);
	std::cout << "Haz elegido : " << YELLOW << input << RESET << "\n";

	//Comparación
	if (!input.compare("ADD"))
		agenda->add_contact();
	else if (!input.compare("SEARCH"))
		agenda->search_contacts();
	else if (!input.compare("EXIT"))
		agenda->exit_program(EXIT_SUCCESS);
	else
	 	print_col("Error\nPlease insert a valid input.\n", RED);
}
