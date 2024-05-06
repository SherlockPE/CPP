/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_line.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:55:43 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/06 11:56:43 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	put_line(int columns)
{
	int	i;

	i = 0;
	while (i < (WSIZE * columns) + columns + 1)
	{
		std::cout << ROW_CLOR << ROW_CHAR << RESET;
		i++;
	}
	std::cout << std::endl;
}
