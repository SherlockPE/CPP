/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_options.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:27:52 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/15 14:55:41 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	manage_options(PhoneBook *agenda)
{
	agenda->input = string_upper(agenda->input);
	std::cout << "Haz elegido : " << YELLOW << agenda->input << RESET << "\n";

	//Comparación
	if (!agenda->input.compare("ADD"))
		agenda->add_contact();
	else if (!agenda->input.compare("SEARCH"))
		agenda->search_contacts();
	else if (!agenda->input.compare("EXIT"))
		agenda->exit_program(EXIT_SUCCESS);
	else
	 	print_col("Error\nPlease insert a valid input.\n", RED);
}
