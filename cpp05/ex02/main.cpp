/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:26:33 by flopez-r          #+#    #+#             */
/*   Updated: 2024/10/21 19:16:40 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	{
		std::cout << YELLOW << "Probando ShrubberyCreationForm" << NC << std::endl;
		try
		{		
			Bureaucrat				General("General", 1);
			Bureaucrat				Novato("Novato", 150);
			ShrubberyCreationForm	TreeForm("Arboleñes");

			// Print group
			std::cout << General << Novato << TreeForm << std::endl;

			// Sign formulary
			// Novato.signForm(TreeForm);
			General.signForm(TreeForm);
			std::cout << TreeForm;

			// Execute Formulary
			// TreeForm.execute(Novato);
			// TreeForm.execute(General);
			General.executeForm(TreeForm);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << YELLOW << "Probando RobotomyRequestForm" << NC << std::endl;
		try
		{
			Bureaucrat				General("General", 1);
			Bureaucrat				Novato("Novato", 150);
			RobotomyRequestForm		Robot("Robotin");

			// Print group
			std::cout << General << Novato << Robot << std::endl;

			// Sign formulary
			// Novato.signForm(Robot);
			General.signForm(Robot);
			std::cout << Robot;

			// Execute Formulary
			// Robot.execute(Novato);
			// Robot.execute(General);
			General.executeForm(Robot);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << YELLOW << "Probando PresidentialPardonForm" << NC << std::endl; 
		try
		{
			Bureaucrat				General("General", 1);
			Bureaucrat				Novato("Novato", 150);
			PresidentialPardonForm	PardonForm("WASAAA");

			// Print group
			std::cout << General << Novato << PardonForm << std::endl;

			// Sign formulary
			// Novato.signForm(PardonForm);
			General.signForm(PardonForm);
			std::cout << PardonForm;

			// Execute Formulary
			// PardonForm.execute(Novato);
			// PardonForm.execute(General);
			General.executeForm(PardonForm);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}
