/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 23:20:45 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/28 15:44:22 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	int i;
	int cant;
	Zombie  *horde;

	cant = 3;
	horde = zombieHorde(cant, "La vida, no me hables de la vida (▽_▽)");
	
	i = 0;
	while (i < cant)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
	return (0);
}
