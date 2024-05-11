/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:05:24 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/11 15:24:07 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout	<< "Memory addresses\n"
				<< "string variable: " << &string << "\n"
				<< "stringptr value: " << stringPTR << "\n"
				<< "sringref memory: " << &stringREF << std::endl;

	std::cout	<< "Variable values\n"
				<< "string variable: " << string << "\n"
				<< "stringptr value: " << *stringPTR << "\n"
				<< "sringref memory: " << stringREF << std::endl;
}
