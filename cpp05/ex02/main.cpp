/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:26:33 by flopez-r          #+#    #+#             */
/*   Updated: 2024/09/17 18:23:05 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	// {
	// 	try
	// 	{		
	// 		Bureaucrat				General("General", 1);
	// 		Bureaucrat				Novato("Novato", 150);
	// 		ShrubberyCreationForm	TreeForm("Arbustos", 50, 1);

	// 		// Print group
	// 		std::cout << General << Novato << TreeForm << std::endl;

	// 		// Sign formulary
	// 		// Novato.signForm(TreeForm);
	// 		General.signForm(TreeForm);
	// 		std::cout << TreeForm;

	// 		// Execute Formulary
	// 		// TreeForm.execute(Novato);
	// 		TreeForm.execute(General);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}		
	// 	return (0);
	// }
	// {
	// 	std::srand(time(0));
	// 	try
	// 	{
	// 		Bureaucrat				General("General", 1);
	// 		Bureaucrat				Novato("Novato", 150);
	// 		RobotomyRequestForm		Robot("Robot", 50, 1);

	// 		// Print group
	// 		std::cout << General << Novato << Robot << std::endl;

	// 		// Sign formulary
	// 		// Novato.signForm(Robot);
	// 		General.signForm(Robot);
	// 		std::cout << Robot;

	// 		// Execute Formulary
	// 		// Robot.execute(Novato);
	// 		Robot.execute(General);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// }
	{
		try
		{
			Bureaucrat				General("General", 1);
			Bureaucrat				Novato("Novato", 150);
			PresidentialPardonForm	PardonForm("PardonForm", 50, 1);

			// Print group
			std::cout << General << Novato << PardonForm << std::endl;

			// Sign formulary
			// Novato.signForm(PardonForm);
			General.signForm(PardonForm);
			std::cout << PardonForm;

			// Execute Formulary
			// PardonForm.execute(Novato);
			PardonForm.execute(General);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
