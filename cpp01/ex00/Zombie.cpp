/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:47:05 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/10 17:24:22 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout   << name << ": "
                << "BraiiiiiiinnnzzzZ..";
}

Zombie* newZombie( std::string name )
{
    Zombie new_zombie;
    
    new_zombie.name = 
}