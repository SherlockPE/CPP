/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamontTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:01:37 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/19 15:17:50 by flopez-r         ###   ########.fr       */
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
        DiamontTrap(void);
        ~DiamontTrap();
        void whoAmI(void);
};

void DiamontTrap::whoAmI(void)
{
    std::cout << "Diamont trap: WhoAmI function called\n";
    std::cout << "DiamontTrap name: " << this->_Name << "\n";
    std::cout << "ClapTrap name: " <<  << "\n";
}

DiamontTrap::DiamontTrap(void)
{
}

DiamontTrap::~DiamontTrap()
{
}



# endif