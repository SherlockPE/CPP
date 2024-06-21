/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:18:28 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/21 20:17:42 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define CYAN "\033[0;36m"
# define WHITE "\033[1;97m"
# define RESET "\033[0m"
# define ORANGE "\033[38;5;208m"

#include <iostream>

class AMateria
{
	protected:
		std::string m_type;
	public:
		/*					Constructors					*/
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria &src);

		/*					Metods					*/
		AMateria &operator=(const AMateria &src);
		std::string	const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

		/*					Destructor					*/
		~AMateria(void);
};

#endif