/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:34:25 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/12 18:52:48 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//Setter
void	Weapon::setType(std::string type)
{
	this->type = type;
}

//Getter
std::string	&Weapon::getType(void)
{
	std::string &typeref = type;
	return (typeref);
}

