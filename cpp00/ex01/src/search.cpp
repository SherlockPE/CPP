/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 14:20:35 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/18 18:57:55 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

int	select_index(int actual_cant)
{
	int			num;
	std::string input;
	while (true)
	{
		input = get_int("Insert index: ");
		num = ft_atoi(input);//(change ft_atoi for original atoi function (*pendient*))
		if (num <= 0 || num > actual_cant)
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

void	PhoneBook::search_contacts(void)
{
	int	selected;

	if (actual_cant == 0)
		return (print_col("Your contact list its empty\n", ORANGE));
	print_contact_table();
	selected = select_index(actual_cant);
	contacts[selected - 1].print_contact_info();
}
