/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_contact_table.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:47:13 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/09 12:44:15 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	PhoneBook::print_contact_table(void)
{
	int	i;

	i = 0;
	put_line(4);
	put_header(CYAN);
	while (i < index)
	{
		put_line(4);
		put_row(i);
		put_line(4);
		i++;
	}
}

// |     Index|First name| Last name| Nick name|
// ---------------------------------------------
// |         0|sasdasdasd|    asdasd|   1234546|
// ----------------------------------------
