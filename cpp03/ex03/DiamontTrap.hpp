/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamontTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:01:37 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/19 18:31:41 by flopez-r         ###   ########.fr       */
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

# endif