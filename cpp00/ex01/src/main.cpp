/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:42:23 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/18 19:39:31 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

int main(void)
{
	PhoneBook 	agenda;
	std::string	input;
	
	agenda.print_title();
	while (1)
	{
		agenda.print_menu();
		input = get_input("Your choose: ");
		manage_options(&agenda, input);
	}
	return (0);
}
