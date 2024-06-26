/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:03:03 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/27 20:23:14 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl complainer;

    complainer.complain("DEBUG");
    complainer.complain("INFO");
    complainer.complain("WARNING");
    complainer.complain("ERROR");
    return 0;
}
