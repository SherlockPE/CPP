/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:09:46 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/03 21:25:09 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	get_input(std::string message, char *input)
{
	std::cout << message << YELLOW ;
	// getline(std::cin, input);
	std::cin >> input; // <--- error here
	std::cout << RESET;
}
