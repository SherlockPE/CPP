/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_upper.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 14:02:18 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/05 14:02:31 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

std::string	string_upper(std::string string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] >= 'a' && string[i] <= 'z')
			string[i] -= 32;
		i++;
	}
	return (string);
}
