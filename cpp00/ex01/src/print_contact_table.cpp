/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_contact_table.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:47:13 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/09 16:54:46 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	PhoneBook::print_contact_table(void)
{
	int	i;
	int	columns;

	i = 0;
	columns = 4;
	put_line((WSIZE * columns) + columns + 1);
	put_header(CYAN);
	put_line((WSIZE * columns) + columns + 1);
	while (i < actual_cant)
	{
		put_row(i);
		put_line((WSIZE * columns) + columns + 1);
		i++;
	}
}

// ---------------------------------------------
// |     Index|First name| Last name| Nick name|
// ---------------------------------------------
// |         0|sasdasdasd|    asdasd|   1234546|
// ---------------------------------------------
