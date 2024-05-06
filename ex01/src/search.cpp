/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 14:20:35 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/06 12:05:50 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	search_contacts(contact *phone_list, int *index)
{
	if (*index == 0)
		return (print_col("Your contact list its empty\n", ORANGE));
	print_contact_table(phone_list, index);
}
