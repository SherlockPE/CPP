/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:39:58 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/04 22:44:13 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

int ft_strcmp(std::string str1, std::string str2)
{
    int i;

    i = 0;
    while (str1[i] || str2[i])
    {
        if (str1[i] != str2[i])
            return (1);
        i++;
    }
    return (0);
}