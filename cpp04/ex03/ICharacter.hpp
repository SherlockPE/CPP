/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:04:44 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/23 12:04:45 by flopez-r         ###   ########.fr       */
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

// ICharacter declaration --------------------------------------------------------


#pragma once
#ifndef _ICHARACTER_HPP
# define _ICHARACTER_HPP
# include <iostream>


class ICharacter {
	public:
		/*					Constructors					*/
		ICharacter(void);
		ICharacter(ICharacter const &other);

		/*					Operators					*/
		ICharacter &operator=(ICharacter const &other);

		/*					Destructor					*/
		~ICharacter(void);
};

#endif // !_ICHARACTER_HPP
