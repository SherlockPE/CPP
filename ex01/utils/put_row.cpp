/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_row.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:53:36 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/07 13:56:24 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	put_row(contact *phone_list, int position)
{
	put_separator();
	put_field(std::to_string(phone_list[position].id));
	put_field(phone_list[position].first_name);
	put_field(phone_list[position].last_name);
	put_field(phone_list[position].nick_name);
	std::cout << std::endl;
}
