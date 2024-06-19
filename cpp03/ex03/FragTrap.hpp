/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:58:32 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/19 16:07:46 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    private:
        /* data */
    public:
        /*					Constructors					*/
        FragTrap(void);
        FragTrap(const FragTrap &src);
        FragTrap(std::string Name);

        /* 						Metods						 */
        void        highFivesGuys(void);
        FragTrap&   operator=(const FragTrap &src);
        ~FragTrap(void);
};

#endif