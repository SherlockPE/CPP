/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:41:14 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/28 15:16:01 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

int	exit_funct(std::string str, int exit_value)
{
	std::cout << str << std::endl;
	return (exit_value);
}

int main(int argc, char const *argv[])
{
    HarlFilter  harl;
    if (argc < 2 || argc > 2)
        return (exit_funct("Not valid parameters", 1));
    harl.filter(argv[1]);
    return 0;
}
