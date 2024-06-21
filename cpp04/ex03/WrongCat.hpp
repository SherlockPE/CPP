/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:00:43 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/15 13:51:34 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		/* data */
	public:
		/* 					Constructor					 */
		WrongCat(void);
		WrongCat(const WrongCat &src);

		/*					Metods						*/
		void	makeSound(void) const;

		/* 					Operator					 */
		WrongCat		&operator=(const WrongCat &src);

		/* 					Destructor					 */
		~WrongCat();
};

#endif