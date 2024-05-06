/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_contact_table.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:47:13 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/06 11:57:21 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	put_header(std::string color)
{
	std::cout << color;
	put_separator();
	put_field("Index");
	put_field("First name");
	put_field("Last name");
	put_field("Nick name");
	std::cout << RESET;
	std::cout << std::endl;
}

void	put_row(contact *phone_list, int position)
{
	put_separator();
	put_field("0");
	put_field(phone_list[position].first_name);
	put_field(phone_list[position].last_name);
	put_field(phone_list[position].nick_name);
	std::cout << std::endl;
}

void	print_contact_table(contact *phone_list, int *index)
{
	int	i;

	i = 0;
	put_line(4);
	put_header(CYAN);
	while (i < *index)
	{
		put_line(4);
		put_row(phone_list, i);
		put_line(4);
		i++;
	}
}

// |     Index|First name| Last name| Nick name|
// ---------------------------------------------
// |         0|sasdasdasd|    asdasd|   1234546|
// ----------------------------------------
