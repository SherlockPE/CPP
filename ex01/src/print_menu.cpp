/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_menu.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:41:56 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/03 19:53:17 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	print_menu(void)
{
	std::cout << "\nPlease write one of the following commands: \n";
	std::cout << GREEN << "ADD " << RESET "To add a contact\n";
	std::cout << GREEN << "SEARCH " << RESET "To display a list of your conta";
	std::cout << "cts\n" << GREEN << "EXIT " << RESET << "To exit program\n";
}
