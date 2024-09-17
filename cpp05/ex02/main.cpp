/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:26:33 by flopez-r          #+#    #+#             */
/*   Updated: 2024/09/17 15:12:58 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int main(void)
{
	{
		try
		{		
			Bureaucrat				General("General", 1);
			Bureaucrat				Novato("Novato", 150);
			ShrubberyCreationForm	TreeForm("Arbustos", 50, 1);

			// Print group
			std::cout << General << Novato << TreeForm << std::endl;

			// Sign formulary
			// Novato.signForm(TreeForm);
			General.signForm(TreeForm);
			std::cout << TreeForm;

			// Execute Formulary
			// TreeForm.execute(Novato);
			TreeForm.execute(General);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}		
		return (0);
	}
}
