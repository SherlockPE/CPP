/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:42:23 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/09 16:07:42 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

int main(void)
{
	PhoneBook agenda;
	
	agenda.index = 0;
	agenda.actual_cant = 0;
	agenda.print_title();
	while (1)
	{
		agenda.print_menu();
		agenda.input = get_input("Your choose: ");
		manage_options(&agenda);
	}
	return (0);
}
