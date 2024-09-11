/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:26:33 by flopez-r          #+#    #+#             */
/*   Updated: 2024/09/11 17:55:24 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;

	{
		std::cout << YELLOW << "\nPrimera prueba\n" << NC ;
		try
		{
			Bureaucrat not_name;
			Bureaucrat Juan("Juan", 1);

			std::cout << not_name;
			std::cout << Juan;

			Juan = not_name;

			std::cout << not_name;
			std::cout << Juan;
		}
		catch(const GradeToHighException& e)
		{
			std::cerr << e.what() << '\n';
		}
		catch(const GradeTooLowException& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << YELLOW << "\nSegunda prueba\n" << NC ;
		try
		{
			throw(GradeTooLowException());
		}
		catch(GradeTooLowException& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}
