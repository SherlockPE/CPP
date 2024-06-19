/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:58:32 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/19 19:09:23 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        /* data */
    public:
        /*					Constructors					*/
        ScavTrap(void);
        ScavTrap(const ScavTrap &src);
        ScavTrap(std::string Name);

        /* 						Metods						 */
        ScavTrap&   operator=(const ScavTrap &src);
        void        attack(const std::string& target);
        void        guardGate(void);
        ~ScavTrap(void);
};

#endif