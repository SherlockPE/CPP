/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:58:05 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/15 13:58:18 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		/*					Constructor					*/
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &src);
	
		/*					Metods						*/
		std::string		getType(void) const;
		void	makeSound(void) const;

		/*					Operator					*/
		WrongAnimal &operator=(const WrongAnimal &src);

		/*					Destructor					*/
		~WrongAnimal(void);
};


#endif