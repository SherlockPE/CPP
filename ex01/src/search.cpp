/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 14:20:35 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/06 15:52:34 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

int	select_index(int *index)
{
	int			num;
	std::string input;

	while (true)
	{
		input = get_int("Insert index: ");
		num = ft_atoi(input);
		if (num < 0 || num > *index)
		{
			std::cout << "Sorry, the index [";
			print_col(input, YELLOW);
			std::cout << "] is not available" << std::endl; 
		}
		else
			break;
	}
	return (num);
}

void	search_contacts(contact *phone_list, int *index)
{
	int	selected;

	if (*index == 0)
		return (print_col("Your contact list its empty\n", ORANGE));
	print_contact_table(phone_list, index);
	selected = select_index(index);
}
