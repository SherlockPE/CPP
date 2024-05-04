/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:09:46 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/04 14:54:02 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

std::string	get_input(std::string message)
{
	std::string input;

	std::cout << message << YELLOW ;
	std::cin.ignore();
	std::getline(std::cin, input);
	std::cout << RESET;
}


// #include <iostream>
// #include <string>

// int main ()
// {
//   std::string name;

//   std::cout << "Please, enter your full name: ";
//   std::getline (std::cin,name);
//   std::cout << "Hello, " << name << "!\n";

//   return 0;
// }