/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_contact_table.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:47:13 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/06 15:53:29 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

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
