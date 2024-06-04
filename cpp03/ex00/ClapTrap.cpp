/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:10:14 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/06/04 15:08:53 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Default constructor
ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called";
	_Name = "Unknown";
	_Hit_points = 10;
	_Energy_points = 10;
	_Attack_damage = 0;
}

//Constructor
ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "Constructor called";
	_Name = Name;
	_Hit_points = 10;
	_Energy_points = 10;
	_Attack_damage = 0;
}

//Destructor
ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called";
}

//Checker
bool	ClapTrap::check_energy(std::string Action)
{
	if (_Energy_points <= 0)
	{
		std::cout	<< "ClapTrap " << _Name 
					<< "Cant " << Action
					<< "becouse it has no energy"
					<< "\nEnergy: " << _Energy_points;
		return (false);
	}
	return (true);
}

//Metods
void ClapTrap::attack(const std::string& target)
{
	if (!check_energy("Attack"))
		return ;
	std::cout	<< "ClapTrap " << _Name 
				<< " attacks " << target
				<< " causing " << _Attack_damage
				<< "points of damage!";
	_Energy_points -= 1;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!check_energy("Be Repaired"))
		return ;
	std::cout	<< "ClapTrap " << _Name 
				<< " repaids himself "
				<< " adding " << amount
				<< "points of HP!";
	_Hit_points += amount;
	_Energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout	<< "ClapTrap " << _Name 
				<< " receives "
				<< amount << " of damage!";
	_Hit_points -= amount;
}
