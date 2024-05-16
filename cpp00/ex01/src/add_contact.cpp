/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:41:34 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/16 13:30:42 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void Contact::set_values (std::string name, std::string lname, std::string nickname, std::string number, std::string d_secret)
{
	first_name = name;
	last_name = lname;
	nick_name = nickname;
	phone_number = number;
	darkest_secret = d_secret;
}

void	PhoneBook::add_contact()
{
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "\n\n YOU ARE ADDING A NEW CONTACT\n\n";
	first_name = get_input("First name: ");
	last_name = get_input("Last name: ");
	nick_name = get_input("nick name: ");
	phone_number = get_int("phone number: ");
	darkest_secret = get_input("darkest_secret: ");
	std::cout << "\nValor de indeX: " << index << std::endl;
	if (index < MAX_CONTACTS)
	{
		contacts[index].set_values(first_name, last_name, nick_name, phone_number, darkest_secret);
		if (actual_cant  < MAX_CONTACTS)
			actual_cant++;
	}
	else
	{
		index = 0;
		contacts[index].set_values(first_name, last_name, nick_name, phone_number, darkest_secret);
	}
	index++;
}
