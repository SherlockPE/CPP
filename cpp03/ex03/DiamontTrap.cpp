/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamontTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:31:51 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/19 18:52:32 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamontTrap.hpp"

/*					Constructors					*/
DiamontTrap::DiamontTrap(std::string _Name): ClapTrap(_Name), ScavTrap(_Name), FragTrap(_Name)
{
	ClapTrap::_Name = _Name + "_clap_name";
	this->_Name = _Name;
	this->_Hit_points = FragTrap::_Hit_points;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
}

DiamontTrap::DiamontTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	ClapTrap::_Name = _Name + "_clap_name";
	this->_Name = "DiamontDefaultName";
	this->_Hit_points = FragTrap::_Hit_points;
	this->_Energy_points = ScavTrap::_Energy_points;
	this->_Attack_damage = FragTrap::_Attack_damage;
}

/* 						Metods						 */
void DiamontTrap::whoAmI(void)
{
	std::cout << "Diamont trap: WhoAmI function called\n";
	std::cout << "DiamontTrap name: " << this->_Name << "\n";
	std::cout << "ClapTrap name: " << ClapTrap::_Name << "\n";
}

DiamontTrap	&DiamontTrap::operator=(const DiamontTrap &src)
{
	this->_Name = src._Name;
	this->_Hit_points = src._Hit_points;
	this->_Energy_points = src._Energy_points;
    return (*this);
}

/* 						Destructor						*/
DiamontTrap::~DiamontTrap(void)
{
	std::cout << "Diamont Destructor called\n";
}