/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:40:35 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/28 15:20:05 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

void	HarlFilter::debug(void) const
{
	std::cout   << "[ DEBUG ]\n"
                << "I love having extra bacon for my "
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger."
				<< " I really do!"
				<< std::endl;
}

void	HarlFilter::info(void) const
{
	std::cout   << "[ INFO ]\n"
                << "I cannot believe adding extra bacon costs more money."
				<< " You didn’t put enough bacon in my burger!"
				<< " If you did, I wouldn’t be asking for more!"
				<< std::endl;
}

void	HarlFilter::warning(void) const
{
	std::cout   << "[ WARNING ]\n"
                << "I think I deserve to have some extra bacon for free."
				<<" I’ve been coming for years whereas you started"
				<< " working here since last month."
				<< std::endl;
}

void	HarlFilter::error(void) const
{
	std::cout	<< "[ ERROR ]\n"
                << "This is unacceptable! I want to speak to the manager now."
				<< std::endl;
}

void    HarlFilter::harl_complain(void) const
{
    std::cout   << "[ Probably complaining about insignificant problems ]"
                << std::endl;
}

void    HarlFilter::filter(std::string  value)
{
    int level;
    std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    level = 0;
    while (level < 4)
    {
        if (value == levels[level])
            break;
        level++;
    }
    switch (level)
    {
        case 0:
            debug();
        case 1:
            info();
        case 2:
            warning();
        case 3:
            error();
            break;
        default:
            harl_complain();
            break;
    }
}
