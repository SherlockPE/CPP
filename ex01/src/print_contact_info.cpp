/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_contact_info.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:22:41 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/09 14:57:08 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	PhoneBook::print_contact_info(int id)
{
    put_line((WSIZE + 2));
    print_col("\nFirst name |", CYAN);
    print_col(contacts[id - 1].first_name, YELLOW);
    print_col("\nLast name |", CYAN);
    print_col(contacts[id - 1].last_name, YELLOW);
    print_col("\nNick name |", CYAN);
    print_col(contacts[id - 1].nick_name, YELLOW);
    print_col("\nphone number |", CYAN);
    print_col(contacts[id - 1].phone_number, YELLOW);
    print_col("\ndarkest_secret |", CYAN);
    print_col(contacts[id - 1].darkest_secret, YELLOW);
}
