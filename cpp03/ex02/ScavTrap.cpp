/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:49:13 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/06/19 12:56:08 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*					Constructors					*/
ScavTrap::ScavTrap(void): ClapTrap()
{
    std::cout << "Scaptrap Default constructor called" << std::endl;
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

ScavTrap::ScavTrap(std::string Name): ClapTrap(Name)
{
    std::cout << "Scaptrap constructor called" << std::endl;
    _Name = Name;
    _Hit_points = 100;
    _Energy_points = 50;
    _Attack_damage = 20;
}

/* 						Metods						 */
void    ScavTrap::guardGate(void)
{
    if (check_energy("set as Gate keeper mode"))
        std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap &src)
{
    std::cout << "Scaptrap Copy Assigment constructor called" << std::endl;
    this->_Name = src._Name;
    this->_Hit_points = src._Hit_points;
    this->_Energy_points = src._Energy_points;
    this->_Attack_damage = src._Attack_damage;
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Scaptrap Destructor called" << std::endl;
}

#include "ScavTrap.hpp"