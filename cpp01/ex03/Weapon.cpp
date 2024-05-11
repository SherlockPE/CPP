/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:34:25 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/11 15:38:59 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//Setter
void	Weapon::setType(std::string type)
{
	this->type = type;
}

//Getter
std::string	Weapon::getType(void)
{
	std::string &typeref = type;
	return (typeref);
}

