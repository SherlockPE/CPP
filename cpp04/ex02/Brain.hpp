/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 14:36:22 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/21 14:28:20 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
		int			_last_idea;
	public:
		/*					Constructor					*/
		Brain(void);
		Brain(const Brain &src);

		/*						Metods					*/
		void	setIdeas(std::string new_idea, int position);
		void	printIdeas(void);
		Brain   &operator=(const Brain &src);

		/*					Destructor					*/
		~Brain();
};

#endif