/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:30:01 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/11 15:45:34 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

int main(void)
{
    Weapon arma;
    std::string reference;

    arma.setType("Ak-47");
    std::cout << "Value of weapon: " << arma.getType() << std::endl;
    reference = arma.getType();
    arma.setType("molotov");
    std::cout << "Value of weapon: " << arma.getType() << std::endl;
    return 0;
}
