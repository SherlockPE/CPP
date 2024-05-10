/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 22:38:56 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/10 23:35:23 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Setter
void	Zombie::set_name(std::string name)
{
    this->name = name;
}

Zombie* Zombie::newZombie( std::string name )
{
    Zombie *new_zombie = new Zombie;
    new_zombie->set_name(name);
    return (new_zombie);
}
