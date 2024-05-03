/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:41:34 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/03 20:45:42 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void    add_contact(contact *phone_list, int *index)
{
	std::cout << "\n\n YOU ARE ADDING A NEW CONTACT\n\n";
	
	phone_list[*index].id = *index + 1;
	get_input("First name: ", phone_list[*index].first_name);
	get_input("Last name: ", phone_list[*index].last_name);
	get_input("nick name: ", phone_list[*index].nick_name);
	get_input("phone number: ", phone_list[*index].phone_number);
	get_input("darkest_secret: ", phone_list[*index].darkest_secret);
	if (*index < 8)
		(*index)++;
}
