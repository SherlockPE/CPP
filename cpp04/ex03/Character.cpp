/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:14:46 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/24 14:25:55 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*					Constructors					*/
Character::Character(void) : pos(0), m_name("Unknown") 
{
	std::cout << GREEN "Character default constructor called" NC << std::endl;
}

Character::Character(std::string name) : pos(0), m_name(name)
{
	std::cout << GREEN "Character Name constructor called" NC << std::endl;
}

Character::Character(Character const &other)
{
	std::cout << GREEN "Character copy constructor called" NC << std::endl;
	*this = other;
}

/*					Operators					*/
Character &Character::operator=(Character const &other)
{
	if (this == &other)
		return (*this);
	int i = 0; 
	this->m_name = other.m_name;
	while (i < 4)
	{
		m_inventory[i] = NULL;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		m_inventory[i] = other.m_inventory[i];
		i++;
	}
	return (*this);
}

/*					Metods					*/
std::string const & Character::getName() const
{
	return (m_name);
}

void				Character::equip(AMateria* m)
{
	if (pos >= 3)		
	{
		std::cout << RED << "Failure: No space left on the inventory of " << m_name << std::endl;
		return ;
	}
	m_inventory[pos] = m;
	pos++;
}

void				Character::unequip(int idx)
{
	if (idx < 0 || idx > 4)
	{
		std::cout << RED << "Fail to unequip: "
		<< "Class Character only have 4 spaces in his inventory, Nothing Done\n" << NC;
		return ;
	}
	m_inventory[idx] = NULL;
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 4)
	{
		std::cout << RED << "Fail to use target: "
		<< "Class Character only have 4 spaces in his inventory, Nothing Done\n" << NC;
		return ;
	}
	else if (m_inventory[idx])
		m_inventory[idx]->use(target);
}


/*					Destructor					*/
Character::~Character(void)
{
	std::cout << RED "Character destructor called" NC << std::endl;
	for (int i = 0; i < pos; i++)
		delete m_inventory[i];
}
