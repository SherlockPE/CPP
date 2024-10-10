/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:26:33 by flopez-r          #+#    #+#             */
/*   Updated: 2024/10/10 12:23:51 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	{
		std::cout << YELLOW << "\nCopy operator prueba\n" << NC ;
		try
		{
			Bureaucrat not_name; // default grade by 150
			Bureaucrat Juan("Juan", 1); // Highest grade posibble

			std::cout << not_name;
			std::cout << Juan;

			Juan = not_name;

			std::cout << not_name;
			std::cout << Juan;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << YELLOW << "\nCopy constructor prueba\n" << NC ;
		try
		{
			Bureaucrat	Michael("Michael", 1);
			Bureaucrat	copia_michael(Michael);

			std::cout << Michael << std::endl;
			std::cout << copia_michael << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << YELLOW << "\nTercera prueba -- subgrade metthod\n" << NC ;
		try
		{
			Bureaucrat	Miguel("Miguel", 145);

			std::cout << Miguel << std::endl;
			for (int i = 150; i > 0; i--)
				Miguel.subGrade();
			std::cout << Miguel << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << YELLOW << "\nCuarta prueba -- addgrade metthod\n" << NC ;
		try
		{
			Bureaucrat	Pablo("Pablo", 5);

			std::cout << Pablo << std::endl;
			for (int i = 0; i < 149; i++)
				Pablo.addGrade();
			std::cout << Pablo << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}
