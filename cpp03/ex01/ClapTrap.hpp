/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:07:38 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/06/17 10:32:47 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>

class ClapTrap
{
    protected:
        std::string _Name;
        int _Hit_points;
        int _Energy_points;
        int _Attack_damage;

        bool    check_energy(std::string Action);
    public:
        /* 						Metods						 */
        ClapTrap    &operator=(const ClapTrap &src);
        void        attack(const std::string& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);

		/*					Constructors					*/
        ClapTrap(void);
        ClapTrap(const ClapTrap &src);
        ClapTrap(std::string Name);
        ~ClapTrap(void);
};
# endif