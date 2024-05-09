/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_row.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:53:36 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/09 13:01:29 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	PhoneBook::put_row(int position)
{
	put_separator();
	put_field(std::to_string(contacts[position].id));
	put_field(contacts[position].first_name);
	put_field(contacts[position].last_name);
	put_field(contacts[position].nick_name);
	std::cout << std::endl;
}
