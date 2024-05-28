/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 23:20:45 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/28 15:24:45 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    d_leaks(void)
{
    system("leaks zombies00");
}

int main (void)
{
    Zombie  *doctor;

    doctor = 0;
    doctor = newZombie("Cerebros");
    doctor->announce();
    delete doctor;
    return (0);
}
