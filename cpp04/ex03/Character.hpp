/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:14:50 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/23 14:47:42 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _COLORS
# define _COLORS
# define BLACK "\033[1;30m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN "\033[1;36m"
# define WHITE "\033[1;37m"
# define NC "\033[0m"

#endif // !_COLORS

// Character declaration --------------------------------------------------------
#pragma once
#ifndef _CHARACTER_HPP
# define _CHARACTER_HPP
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		AMateria	*m_inventory[4];
		std::string	m_name;
	public:
		/*					Constructors					*/
		Character(void);
		Character(std::string name);
		Character(Character const &other);

		/*					Operators					*/
		Character &operator=(Character const &other);

		/*					Metods					*/
		std::string const & getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);

		/*					Destructor					*/
		~Character(void);
};

#endif // !_CHARACTER_HPP
