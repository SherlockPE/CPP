/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_contact_table.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:47:13 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/05 14:38:03 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	put_header(std::string color)
{
	std::cout << color;
	std::cout << "|";
	put_field("Index");
	put_field("First name");
	put_field("Last name");
	put_field("Nick name");
	std::cout << RESET;
	std::cout << std::endl;
}

void	put_row(contact *phone_list, int position)
{
	std::cout << "|";
	put_field("0");
	put_field(phone_list[position].first_name);
	put_field(phone_list[position].last_name);
	put_field(phone_list[position].nick_name);
	std::cout << std::endl;
}

void	put_line(std::string character, std::string color)
{
	int	i;

	i = 0;
	while (i < WSIZE)
	{
		std::cout << color << character << RESET;
		i++;
	}
}

void    print_contact_table(contact *phone_list, int *index)
{
    int	i;

	i = 0;

	put_line("-", "");
	put_header(CYAN);
	while (i < *index)
	{
		put_line("-", "");
		put_row(phone_list, i);
		put_line("-", "");
		i++;
	}
}

// Desplegando lista de contactos
// |Last name||    Index||First name||Nick name|
// |       r0||      asa||        s||         |

// |    Index||First name||Last name||Nick name|
// |       r0||      asa||        s||        s|

// Desplegando lista de contactos
// |     Index||First name|| Last name|| Nick name|
// |        r0||        as||asaaaaaaa.||bbbbbbbbb.|
