/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_row.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:53:36 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/15 15:08:12 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	PhoneBook::put_row(int position)
{
	put_separator();
	// put_field(std::to_string(position + 1));
	std::cout << std::setw(WSIZE) << position + 1;
	put_separator();
	put_field(contacts[position].first_name);
	put_field(contacts[position].last_name);
	put_field(contacts[position].nick_name);
	std::cout << std::endl;
}
