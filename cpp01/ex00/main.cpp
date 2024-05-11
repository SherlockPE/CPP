/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 23:20:45 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/11 13:59:02 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    d_leaks(void)
{
    system("leaks zombies00");
}

// int main (void)
// {
//     Zombie  doctor;

//     atexit(d_leaks);
//     doctor.randomChump("no Cerebros");
//     // cubeta.newZombie("delfin");
//     // cubeta.randomChump("Soy el de la cubeta");
//     return (0);
// }

int main (void)
{
    Zombie  *doctor;

    // atexit(d_leaks);
    doctor = 0;
    doctor = newZombie("Cerebros");
    doctor->announce();
    // cubeta.newZombie("delfin");
    // cubeta.randomChump("Soy el de la cubeta");
    delete doctor;
    return (0);
}
