/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:09:29 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/23 13:19:24 by flopez-r         ###   ########.fr       */
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

// Ice declaration --------------------------------------------------------


#pragma once
#ifndef _ICE_HPP
# define _ICE_HPP
# include <iostream>
# include "AMateria.hpp"


class Ice : public AMateria
{
	public:
		/*					Constructors					*/
		Ice(void);
		Ice(Ice const &other);

		/*					Operators					*/
		Ice		&operator=(Ice const &other);

		/*					Metods					*/
		Ice*	clone() const;
		void	use(ICharacter& target);

		/*					Destructor					*/
		~Ice(void);
};

#endif // !_ICE_HPP
