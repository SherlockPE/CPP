/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:47:05 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/11 13:56:58 by flopez-r         ###   ########.fr       */
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

//Setter
void	Zombie::set_name(std::string name)
{
	this->name = name;
}

//Destructor
Zombie:: ~Zombie(void)
{
	std::cout << name << ": removed" << std::endl;
}
