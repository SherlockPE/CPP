/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:26:33 by flopez-r          #+#    #+#             */
/*   Updated: 2024/10/09 14:28:13 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main(void)
{
	{	//Error Form
		try
		{
			Intern		pasant;
			AForm		*Form;

			Form = pasant.makeForm("asdsaadda", "wasaa");
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{	//Presidential pardon Form
		try
		{
			Intern		internet;
			Bureaucrat	General("General", 1);
			AForm		*Form;

			Form = internet.makeForm("pReSiDentIaL PArdOn", "wasaa");
			
			Form->beSigned(General);
			Form->execute(General);
			// delete Form;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}
