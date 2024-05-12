/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 18:54:00 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/12 19:04:16 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout	<< name
				<< " attacks with their "
				<< _weapon.getType();
}


HumanA::HumanA(std::string weapon)
{
	_weapon.setType(weapon);
}
