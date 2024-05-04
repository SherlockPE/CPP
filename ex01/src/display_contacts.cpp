/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_contacts.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:47:13 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/04 14:52:59 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	print_arr_val(std::string message, char *value)
{
	std::cout << message << value << std::endl;
}

void	display_contacts(contact *phone_list, int *index)
{
	std::cout << "\n\nDesplegando lista de contactos\n\n";

	int i = 0;

	while (i < *index)
	{
		std::cout << "index: " << phone_list[i].id << std::endl;
		print_arr_val("First name: ", phone_list[i].first_name);
		print_arr_val("Last name: ", phone_list[i].last_name);
		print_arr_val("nick name: ", phone_list[i].nick_name);
		print_arr_val("Phone number: ", phone_list[i].phone_number);
		print_arr_val("darkest secret: ", phone_list[i].darkest_secret);
		i++;
	}
}