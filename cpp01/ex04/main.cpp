/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 21:18:36 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/27 15:43:29 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

int	exit_funct(std::string str, int exit_value)
{
	std::cout << str << std::endl;
	return (exit_value);
}

int main(int argc, char *argv[])
{
	if (argc < 4 || argc > 4)
		return (exit_funct("Error\nparametros erroneos", 1));

	Replacer		replace_file_obj(argv[2], argv[3]);
	std::ifstream	fich_read(argv[1]);
	std::string		string_extracted;
	std::string		archive_name;

	if (!fich_read.is_open())
		return (exit_funct("Error al abrir el fichero", 1));
	std::getline(fich_read, string_extracted, '\0');
	if (!fich_read.good() && !fich_read.eof())
		return (exit_funct("Error al leer el fichero", 1));

	archive_name = argv[1];
	archive_name.append(".replace");
	std::ofstream fich1(archive_name.c_str());
	if (!fich1)
		return (exit_funct("Error al crear el archivo", 1));
	
	replace_file_obj.replace_and_save(string_extracted, fich1);
	return (0);
}

// //Para escribir en el fichero:
	
// 	if (!fich1)
// 		return (exit_funct("Error al abrir el fichero", 1));
// 	int	i;

// 	i = 0;
// 	while (i < 20)
// 	{
// 		fich1 << i << std::endl;
// 		i++;
// 	}
// 	fich1.close(); */