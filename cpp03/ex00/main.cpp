/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:21:13 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/13 16:56:02 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	_default;
	ClapTrap	_param("Biddle");
	ClapTrap	_copy_constr(_param);

	int	i = 11;
	while (i--)
	{
		_default.attack("alguien");
		_param.attack("alguien");
		_copy_constr.attack("alguien");
	}
	_copy_constr.beRepaired(2);

	_copy_constr.takeDamage(500);
	_copy_constr.attack("some");
	_param.attack("some");
	
	return 0;
}
