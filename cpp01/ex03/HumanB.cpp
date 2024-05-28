/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:07:33 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/28 16:37:21 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(void)
{
	if (_weapon)
	{
		std::cout	<< _name
					<< " attacks with their "
					<< _weapon->getType() << std::endl;
	}
	else
		std::cout	<< _name
					<< " attacks with their fists" << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

// Constructor
HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
}
