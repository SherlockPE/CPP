/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 18:54:00 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/16 14:31:32 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

void	HumanA::attack(void)
{
	std::cout	<< _name
				<< " attacks with their "
				<< _weapon.getType();
}

// Constructor
HumanA::HumanA(std::string name, Weapon &weapon)
{
	_name = name;
	_weapon = weapon;
}
