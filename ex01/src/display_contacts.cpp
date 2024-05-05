/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_contacts.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:47:13 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/05 13:52:58 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	print_arr_val(std::string message, std::string value)
{
	std::cout << message << value << std::endl;
}

void	put_field(std::string content)
{
	int	c_len;
	int	i;

	c_len = ft_strlen(content);
	if (c_len > WSIZE)
	{
		content[WSIZE - 1] = '.';
		content[WSIZE] = 0;
	}
	i = 0;
	//   std::cout << "|";
	std::cout << std::setfill(' ') << std::setw(WSIZE - c_len + 1);
	while (i < WSIZE && content[i])
	{
		std::cout << content[i];
		i++;
	}
	std::cout << "|";
	//   std::cout << "|";
}

void	print_titles(void)
{
	std::cout << "|";
	put_field("Index");
	put_field("First name");
	put_field("Last name");
	put_field("Nick name");
	std::cout << std::endl;
}

void	put_rows(contact *phone_list, int position)
{
	std::cout << "|";
	put_field("0");
	put_field(phone_list[position].first_name);
	put_field(phone_list[position].last_name);
	put_field(phone_list[position].nick_name);
	std::cout << std::endl;
}

void	display_contacts(contact *phone_list, int *index)
{
	int	i;

	std::cout << ORANGE;
	std::cout << "\n\nDesplegando lista de contactos\n";
	std::cout << RESET;
	i = 0;
	if (*index == 0)
	{
		std::cout << ORANGE;
		std::cout << "Your contact list its empty\n";
		std::cout << RESET;
		return ;
	}
	print_titles();
	while (i < *index)
	{
		put_rows(phone_list, i);
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
