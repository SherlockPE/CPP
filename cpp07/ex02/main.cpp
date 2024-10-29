/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:52:24 by flopez-r          #+#    #+#             */
/*   Updated: 2024/10/29 15:05:02 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstddef>

int main(void)
{
	// int *a = new int();
	size_t				size_list = 7;
	Array<int>			list(size_list);

	list.print_list();

	for (size_t i = 0; i < size_list; i++)
		list[i] = i;

	list.print_list();
	return (0);
}
