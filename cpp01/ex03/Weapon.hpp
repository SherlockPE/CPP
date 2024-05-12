/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:30:33 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/12 18:52:54 by fabriciolop      ###   ########.fr       */
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
		std::string	&getType(void);
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