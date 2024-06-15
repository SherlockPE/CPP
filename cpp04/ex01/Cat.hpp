/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:00:43 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/15 14:55:28 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brain;
	public:
		/* 					Constructor					 */
		Cat(void);
		Cat(const Cat &src);

		/*					Metods						*/
		void	makeSound(void) const;

		/* 					Operator					 */
		Cat		&operator=(const Cat &src);

		/* 					Destructor					 */
		~Cat();
};

#endif