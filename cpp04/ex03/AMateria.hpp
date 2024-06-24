/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:18:28 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/24 10:15:02 by flopez-r         ###   ########.fr       */
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

// AMateria declaration -------------------------------------------------------

#pragma once
#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string m_type;
	public:
		/*					Constructors					*/
		AMateria(void);
		AMateria(const AMateria &src);
		AMateria(std::string const & type);

		/*					Operators					*/
		AMateria &operator=(const AMateria &src);
		
		/*					Metods					*/
		std::string	const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

		/*					Destructor					*/
		~AMateria(void);
};

#endif