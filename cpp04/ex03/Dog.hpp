/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 12:46:59 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/21 14:53:58 by flopez-r         ###   ########.fr       */
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
		void	setIdeas(std::string idea, int position);
		void	printIdeas(void);

		/* 					Operator					 */
		Dog		&operator=(const Dog &src);

		/* 					Destructor					 */
		~Dog();
};

#endif