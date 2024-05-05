/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_menu.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:41:56 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/05 14:01:41 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	print_menu(void)
{
	std::cout << "\nPlease write one of the following commands: \n";
	print_col("ADD", GREEN);
	std::cout << "To add a contact\n";
	print_col("SEARCH", GREEN);
	std::cout <<  "To display a list of your contacts";
	print_col("EXIT", GREEN);
	std::cout << "To exit program\n";
}
