/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:42:23 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/03 18:55:16 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

int main(void)
{
	int		end;
	char	input[80];
	contact	phone_list[8];

	end = FALSE;
	while (1)
	{
		get_input(input);
		if (manage_options(input, phone_list, &end))
			continue ;
		if (end)
			break;
	}	
	return (0);
}
