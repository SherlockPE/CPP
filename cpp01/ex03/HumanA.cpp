/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 18:54:00 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/26 20:59:04 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout	<< _name
				<< " attacks with their "
				<< _weapon.getType() << std::endl;
}

// Constructor
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}
