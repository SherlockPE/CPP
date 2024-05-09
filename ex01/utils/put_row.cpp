/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_row.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:53:36 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/09 15:38:19 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	PhoneBook::put_row(int position)
{
	static int i = 1;
	put_separator();
	put_field(std::to_string(i));
	put_field(contacts[position].first_name);
	put_field(contacts[position].last_name);
	put_field(contacts[position].nick_name);
	if (i >= MAX_CONTACTS)
		i = 1;
	std::cout << std::endl;
}
