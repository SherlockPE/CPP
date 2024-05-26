/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:30:33 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/16 18:49:08 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP


# include <iostream>
# include <iomanip>

class Weapon
{
	private:
		std::string _type;
	public:
		std::string	&getType(void);
		void		setType(std::string type);
		Weapon(void);
		Weapon(std::string type);
};

#endif