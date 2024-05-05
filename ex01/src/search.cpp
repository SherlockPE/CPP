/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 14:20:35 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/05 16:21:00 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

int     get_int(int *max_id, std::string input, int max_index)
{
	int num;

	while (true)
	{
		std::cout << input;
		std::cin >> num;
		if (!std::cin)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if (num < 0 || num > max_index)
			std::cout << "Sorry there's no input for you";
		else
			break;
	}
}

void	search_contacts(contact *phone_list, int *index)
{
	if (*index == 0)
		return (print_col("Your contact list its empty\n", ORANGE));
	print_contact_table(phone_list, index);
}
