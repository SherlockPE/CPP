/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 12:04:53 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/15 13:39:16 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		/*					Constructor					*/
		Animal(void);
		Animal(const Animal &src);
	
		/*					Metods						*/
		std::string		getType(void) const;
		virtual	void	makeSound(void) const;

		/*					Operator					*/
		Animal &operator=(const Animal &src);

		/*					Destructor					*/
		~Animal(void);
};


#endif