/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_field.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 14:26:50 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/15 16:17:42 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	put_field(std::string content)
{
	int	c_len;
	int	i;

	c_len = content.length();
	// c_len = ft_strlen(content);
	if (c_len > WSIZE)
	{
		content[WSIZE - 1] = '.';
		content[WSIZE] = 0;
	}
	i = 0;
	std::cout << std::setw(WSIZE - c_len + 1);
	while (i < WSIZE && content[i])
	{
		std::cout << content[i];
		i++;
	}
	put_separator();
}
