/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamontTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:01:37 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/19 16:56:43 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DIAMONT_TRAP_HPP
# define DIAMONT_TRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamontTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _Name;
	public:
		/*					Constructors					*/
		DiamontTrap(void);
		DiamontTrap(std::string _Name);
		DiamontTrap(const DiamontTrap &src);

		/* 						Metods						 */
		void		whoAmI(void);
		DiamontTrap	&operator=(const DiamontTrap &src);
		~DiamontTrap(void);
};

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
	this->_Name = _Name;
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
}

/* 						Destructor						*/
DiamontTrap::~DiamontTrap(void)
{
	std::cout << "Diamont Destructor called\n";
}
# endif