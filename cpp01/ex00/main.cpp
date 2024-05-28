/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 23:20:45 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/28 15:42:09 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	Zombie  *z_object;

	z_object = 0;
	z_object = newZombie("Pedro");
	z_object->announce();
	delete z_object;

	randomChump("Patatas");
	return (0);
}
