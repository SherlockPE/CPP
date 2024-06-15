/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 14:52:07 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/15 14:52:31 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*					Constructor					*/
Brain::Brain(void)
{
	std::cout << "Brain constructor called\n";
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain constructor called\n";
	(*this) = src;
}

/*					Assign Operator					*/
Brain   &Brain::operator=(const Brain &src)
{
	std::cout << "Brain Assign operator called\n";
	for (int i = 0; i < 100; i++) 
		this->ideas[i] = src.ideas[i];
	return (*this);
}

/*					Destructor					*/
Brain::~Brain()
{
	std::cout << "Brain Destructor called\n";
}