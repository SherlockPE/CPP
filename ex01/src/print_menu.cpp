/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_menu.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:41:56 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/06 11:38:33 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	print_menu(void)
{
	std::cout << "\nPlease write one of the following commands: \n";
	print_col("ADD", GREEN);
	std::cout << " to add a contact\n";
	print_col("SEARCH", GREEN);
	std::cout <<  " to display a list of your contacts\n";
	print_col("EXIT", GREEN);
	std::cout << " to exit program\n";
}
