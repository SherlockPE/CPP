/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 14:52:07 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/21 15:18:08 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*					Constructor					*/
Brain::Brain(void)
{
	std::cout << "Brain Default 🧠 constructor called\n";
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain 🧠 copy constructor called\n";
	(*this) = src;
}

/*						Metods					*/
void	Brain::setIdeas(std::string new_idea, int position)
{
	_ideas[position] = new_idea;
	if (position > _last_idea)
		_last_idea = position;
}

void	Brain::printIdeas(void)
{
	for (int i = 0; i < _last_idea; i++)
		std::cout << "Idea " << i + 1 << ": " << _ideas[i] << "\n";
}


Brain   &Brain::operator=(const Brain &src)
{
	std::cout << "Brain 🧠 Assign operator called\n";
	for (int i = 0; i < 100; i++) 
		this->_ideas[i] = src._ideas[i];
	_last_idea = src._last_idea;
	return (*this);
}

/*					Destructor					*/
Brain::~Brain()
{
	std::cout << "Brain 🧠 Destructor called\n";
}