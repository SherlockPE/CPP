/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 12:46:59 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/15 12:59:43 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		/* data */
	public:
		/* 					Constructor					 */
		Dog(void);
		Dog(const Dog &src);

		/* 					Operator					 */
		Dog	&operator=(const Dog &src);

		/* 					Destructor					 */
		~Dog();
};

#endif