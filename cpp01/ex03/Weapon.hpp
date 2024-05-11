/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:30:33 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/11 15:50:22 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP


# include <iostream>
# include <iomanip>

class Weapon
{
	private:
		std::string type;
	public:
		//Getter
		std::string	getType(void);
		//Setter
		void		setType(std::string type);

		Weapon(/* args */);
		~Weapon();
};

Weapon::Weapon(/* args */)
{
}

Weapon::~Weapon()
{
}

#endif