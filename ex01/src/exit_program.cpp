/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_program.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 12:52:34 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/09 12:54:10 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void    PhoneBook::exit_program(int exit_code)
{
    print_col("Saliendo......\n", MAGENTA);
    exit(exit_code);
}