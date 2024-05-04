/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:42:23 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/04 14:03:21 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

int main(void)
{
	static int	index;
	int		end;
	// char	input[80];
	std::string input;
	contact	phone_list[8];

	print_title();
	end = FALSE;
	while (1)
	{
		print_menu();
		get_input("Your choose: ", &input);
		if (manage_options(input, phone_list, &end, &index))
			continue ;
		if (end)
			break;
	}
	return (0);
}
