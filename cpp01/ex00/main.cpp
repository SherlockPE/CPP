/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 23:20:45 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/10 23:52:18 by fabriciolop      ###   ########.fr       */
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
    doctor = doctor->newZombie("Cerebros");
    doctor->announce();
    // cubeta.newZombie("delfin");
    // cubeta.randomChump("Soy el de la cubeta");
    delete doctor;
    return (0);
}
