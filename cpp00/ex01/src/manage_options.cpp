/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_options.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:27:52 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/09 17:19:59 by fabriciolop      ###   ########.fr       */
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
	else if (!agenda->input.compare("EXIT") || !agenda->input.compare("Q"))
		agenda->exit_program(EXIT_SUCCESS);
	else
	 	print_col("Error\nPlease insert a valid input.\n", RED);
}
