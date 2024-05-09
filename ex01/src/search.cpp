/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 14:20:35 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/09 15:01:27 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

int	select_index(int index)
{
	int			num;
	std::string input;

	while (true)
	{
		input = get_int("Insert index: ");
		num = ft_atoi(input);//(change ft_atoi for original atoi function (*pendient*))
		if (num <= 0 || num > index)
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

	if (index == 0)
		return (print_col("Your contact list its empty\n", ORANGE));
	print_contact_table();
	selected = select_index(index);
	print_contact_info(selected);
}
