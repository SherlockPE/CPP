/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:39:56 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/28 15:20:19 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_FILTER_HPP
#define HARL_FILTER_HPP

#include <iostream>

class HarlFilter
{
    private:
        
    public:
        void	debug(void) const;
		void	info(void) const;
		void	warning(void) const;
		void	error(void) const;
        void    harl_complain(void) const;
        void    filter(std::string  value);
};

#endif