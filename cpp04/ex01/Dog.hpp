/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 12:46:59 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/15 14:55:52 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;
	public:
		/* 					Constructor					 */
		Dog(void);
		Dog(const Dog &src);
		/*					Metods						*/
		void	makeSound(void) const;

		/* 					Operator					 */
		Dog		&operator=(const Dog &src);

		/* 					Destructor					 */
		~Dog();
};

#endif