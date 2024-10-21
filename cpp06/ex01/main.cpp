/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:34:57 by flopez-r          #+#    #+#             */
/*   Updated: 2024/10/21 16:49:05 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data        *original;
	uintptr_t   original_serialized;
	Data        *result;

	//Valor original...
	original = new Data("Fernando", 20);

	//Serializando...
	original_serialized = Serializer::serialize(original);
	result = Serializer::deserialize(original_serialized);

	// Comprobando si son iguales...
	if (original != result)
	{
		std::cout << RED << "No son iguales" << NC << std::endl;
		delete original;
		return (EXIT_FAILURE);
	}
	else
	std::cout << GREEN << "Son iguales" << NC << std::endl;
	delete original;
	return (EXIT_SUCCESS);
}
