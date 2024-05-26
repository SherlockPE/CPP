/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 21:18:36 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/26 21:45:26 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex04.hpp"

int	exit_funct(std::string str, int exit_value)
{
	std::cout << str << std::endl;
	return (exit_value);
}

int main(int argc, char *argv[])
{
	if (argc < 4 || argc > 4)
		return (exit_funct("Error\nparametros erroneos", 1));

//Para escribir en el fichero:
	
	std::ofstream fich1(std::strcat(argv[1], ".replace"));
	if (!fich1)
		return (exit_funct("Error al abrir el fichero", 1));

	fich1.close();
	return 0;
}
