/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:49:13 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/06/19 18:54:58 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*					Constructors					*/
FragTrap::FragTrap(void): ClapTrap()
{
	std::cout << "Fragtrap Default constructor called" << std::endl;
	_Hit_points = 100;
	_Energy_points = 100;
	_Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "Fragtrap Copy constructor called" << std::endl;
	_Name = src._Name;
	_Hit_points = src._Hit_points;
	_Energy_points = src._Energy_points;
	_Attack_damage = src._Attack_damage;
}

FragTrap::FragTrap(std::string Name): ClapTrap(Name)
{
	std::cout << "Fragtrap constructor called" << std::endl;
	_Name = Name;
	_Hit_points = 100;
	_Energy_points = 100;
	_Attack_damage = 30;
}

/* 						Metods						 */
void	FragTrap::highFivesGuys(void)
{
	if (check_energy("give a high five"))
		std::cout	<< "FragTrap: " << _Name << " gives you a "
					<< "HEYY HIGH FIVEE ✋ (>▿<)っ" << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap &src)
{
	std::cout << "Fragtrap Copy Assigment constructor called" << std::endl;
	this->_Name = src._Name;
	this->_Hit_points = src._Hit_points;
	this->_Energy_points = src._Energy_points;
	this->_Attack_damage = src._Attack_damage;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "Scaptrap Destructor called" << std::endl;
}
