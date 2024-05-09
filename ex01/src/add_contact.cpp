/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:41:34 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/09 12:26:46 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void contact::set_values (int id, std::string name, std::string lname, std::string nickname, std::string number, std::string d_secret)
{
	this->id = id;
	first_name = name;
	last_name = lname;
	nick_name = nickname;
	phone_number = number;
	darkest_secret = d_secret;
}

void	PhoneBook::add_contact()
{
	int			id;
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "\n\n YOU ARE ADDING A NEW CONTACT\n\n";
	id = index + 1;
	first_name = get_input("First name: ");
	last_name = get_input("Last name: ");
	nick_name = get_input("nick name: ");
	phone_number = get_int("phone number: ");
	darkest_secret = get_input("darkest_secret: ");
	contacts[index].set_values(id, first_name, last_name, nick_name, phone_number, darkest_secret);
	if (index < 8)
		index++;
	else
		index = 0;
}
