/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:47:05 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/10 23:57:06 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Metod announce
void Zombie::announce(void)
{
	std::cout	<< name << ": "
				<< "BraiiiiiiinnnzzzZ.."
				<< std::endl;
}

Zombie:: ~Zombie(void)
{
	std::cout << name << ": removed" << std::endl;
}
