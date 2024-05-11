/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 14:13:18 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/11 14:15:09 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include   "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	int		i;
	Zombie	*horde;

	horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		horde[i].set_name(name);
		i++;
	}
	return (horde);
}
