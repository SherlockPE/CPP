/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:49:13 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/06/17 10:50:29 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*					Constructors					*/
ScavTrap::ScavTrap(void)
{
    std::cout << "Scaptrap Default constructor called" << std::endl;
    _Name = "Default Name";
    _Hit_points = 100;
    _Energy_points = 50;
    _Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
    std::cout << "Scaptrap Copy constructor called" << std::endl;
    _Name = src._Name;
    _Hit_points = src._Hit_points;
    _Energy_points = src._Energy_points;
    _Attack_damage = src._Attack_damage;
}

ScavTrap::ScavTrap(std::string Name)
{
    _Name = Name;
    _Hit_points = 100;
    _Energy_points = 50;
    _Attack_damage = 20;
}

/* 						Metods						 */
void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap &src)
{
    std::cout << "Scaptrap Copy Assigment constructor called" << std::endl;
    _Name = src._Name;
    _Hit_points = src._Hit_points;
    _Energy_points = src._Energy_points;
    _Attack_damage = src._Attack_damage;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Scaptrap Destructor called" << std::endl;
}

#include "ScavTrap.hpp"