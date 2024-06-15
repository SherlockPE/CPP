/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 14:36:22 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/15 14:52:00 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		/*					Constructor					*/
		Brain(void);
		Brain(const Brain &src);

		/*					Assign Operator					*/
		Brain   &operator=(const Brain &src);

		/*					Destructor					*/
		~Brain();
};

#endif