/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:04:44 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/27 19:48:04 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl;
typedef void	(Harl::*fn_ptr)(void) const;
class Harl
{
	private:
		fn_ptr	functions[4];
	public:
		
		void	debug(void) const;
		void	info(void) const;
		void	warning(void) const;
		void	error(void) const;
		void	complain( std::string level );
		Harl(/* args */);
		~Harl();
};

#endif