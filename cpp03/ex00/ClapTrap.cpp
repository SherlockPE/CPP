/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:10:14 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/06/13 16:53:04 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*					Constructors					*/
ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	_Name = "Unknown";
	_Hit_points = 10;
	_Energy_points = 10;
	_Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "Constructor called" << std::endl;
	_Name = Name;
	_Hit_points = 10;
	_Energy_points = 10;
	_Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


//Checker
bool	ClapTrap::check_energy(std::string Action)
{
	if (_Energy_points <= 0)
	{
		std::cout	<< "ClapTrap " << _Name 
					<< " Can't " << Action
					<< " becouse it has no energy" << std::endl;
		return (false);
	}
	return (true);
}

/* 						Metods						 */
void ClapTrap::attack(const std::string& target)
{
	if (!check_energy("Attack"))
		return ;
	std::cout	<< "ClapTrap " << _Name 
				<< " attacks " << target
				<< " causing " << _Attack_damage
				<< " points of damage!" << std::endl;
	_Energy_points -= 1;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!check_energy("Be Repaired"))
		return ;
	std::cout	<< "ClapTrap " << _Name 
				<< " repaids himself "
				<< " adding " << amount
				<< "points of HP!" << std::endl;
	_Hit_points += amount;
	_Energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout	<< "ClapTrap " << _Name 
				<< " receives "
				<< amount << " of damage!" << std::endl;
	_Hit_points -= amount;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Copy operator called\n";
	this->_Name = src._Name;
	this->_Hit_points = src._Hit_points;
	this->_Energy_points = src._Energy_points;
	this->_Attack_damage = src._Attack_damage;
	return (*this);
}

/* 					Destructor					 */
ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}
