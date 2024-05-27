/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 18:34:38 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/27 20:30:38 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#define CALL_MEM_FN(puntero_a_fn) (this->*(puntero_a_fn))


void	Harl::debug(void) const
{
	std::cout   << "I love having extra bacon for my "
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger."
				<< " I really do!"
				<< std::endl;
}

void	Harl::info(void) const
{
	std::cout   << "I cannot believe adding extra bacon costs more money."
				<< " You didn’t put enough bacon in my burger!"
				<< " If you did, I wouldn’t be asking for more!"
				<< std::endl;
}

void	Harl::warning(void) const
{
	std::cout   << "I think I deserve to have some extra bacon for free."
				<<" I’ve been coming for years whereas you started"
				<< " working here since last month."
				<< std::endl;
}

void	Harl::error(void) const
{
	std::cout	<< "This is unacceptable! I want to speak to the manager now."
				<< std::endl;
}

void	Harl::complain( std::string level )
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;

	i = 0;
	while (i < 4)
	{
		if (level == levels[i])
			CALL_MEM_FN(functions[i])();
		i++;
	}
}

Harl::Harl(void)
{
	functions[0] = &Harl::debug;
	functions[1] = &Harl::info;
	functions[2] = &Harl::warning;
	functions[3] = &Harl::error;
}

Harl::~Harl()
{
}
