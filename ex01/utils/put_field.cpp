/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_field.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 14:26:50 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/05 14:27:07 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	put_field(std::string content)
{
	int	c_len;
	int	i;

	c_len = ft_strlen(content);
	if (c_len > WSIZE)
	{
		content[WSIZE - 1] = '.';
		content[WSIZE] = 0;
	}
	i = 0;
	std::cout << std::setfill(' ') << std::setw(WSIZE - c_len + 1);
	while (i < WSIZE && content[i])
	{
		std::cout << content[i];
		i++;
	}
	std::cout << "|";
}
