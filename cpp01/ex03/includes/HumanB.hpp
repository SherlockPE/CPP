/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:07:02 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/16 14:29:25 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		class Weapon _weapon;
	public:
		
		void	attack(void);
		void	setWeapon(Weapon weapon);
		HumanB(std::string name);
};


#endif