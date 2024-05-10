/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_line.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:55:43 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/09 14:37:47 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	put_line(int columns)
{
	int	i;

	i = 0;
	while (i < columns)
	{
		std::cout << ROW_CLOR << ROW_CHAR << RESET;
		i++;
	}
	std::cout << std::endl;
}
