/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 16:21:13 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/19 12:53:13 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	_default;
	ScavTrap	_param("Biddle");
	// ClapTrap	_copy_constr(_param);

	std::cout << "----------------------------------\n";
	for(int i=50; i > 0; i--)
		_param.attack("alguien");
	std::cout << "----------------------------------\n";
	for(int i=2; i > 0; i--)
		_default.takeDamage(10);
	_default.attack("you");
	return 0;
}
