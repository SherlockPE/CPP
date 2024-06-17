/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:58:32 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/17 10:49:09 by fabriciolop      ###   ########.fr       */
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
        ScavTrap::ScavTrap(std::string Name);

        /* 						Metods						 */
        ScavTrap&   operator=(const ScavTrap &src);
        void        guardGate(void);
        ~ScavTrap(void);
};

#endif