/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 23:20:45 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/11 14:25:13 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	int i;
	int cant;
	Zombie  *horde;

	cant = 3;
	horde = zombieHorde(cant, "ichi ni san, nya arigatooo");
	
	i = 0;
	while (i < cant)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
	return (0);
}
