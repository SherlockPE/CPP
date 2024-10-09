/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:26:33 by flopez-r          #+#    #+#             */
/*   Updated: 2024/10/09 15:07:17 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main(void)
{
	Bureaucrat	General("General", 1);
	Intern		MikeRoss;
	AForm		*Form;

	Form = NULL;
	{
		std::cout << MAGENTA << "Error Form" << NC << std::endl;
		try
		{
			Form = MikeRoss.makeForm("A mi oficina.", "Harvey");	

			Form->beSigned(General);
			Form->execute(General);
			delete (Form);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << MAGENTA << "Presidential pardon Form" << NC << std::endl;
		try
		{
			Form = MikeRoss.makeForm("pReSiDentIaL PArdOn", "wasaa");
			
			Form->beSigned(General);
			Form->execute(General);
			delete Form;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << MAGENTA << "Robotomy request" << NC << std::endl;
		try
		{
			Form = MikeRoss.makeForm("ROBOTOMY rEQUEST", "robot");

			Form->beSigned(General);
			Form->execute(General);
			delete Form;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << MAGENTA << "Shrubbery Creation" << NC << std::endl;
		try
		{
			Form = MikeRoss.makeForm("Shrubbery CREAtion", "juan");

			Form->beSigned(General);
			Form->execute(General);
			delete Form;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}
