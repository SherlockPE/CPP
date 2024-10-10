/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:26:33 by flopez-r          #+#    #+#             */
/*   Updated: 2024/10/10 12:43:12 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	{
		try
		{
			Form		Tratado("Tratado de paz", 5, 1);
			Bureaucrat	General("General", 1);
			Bureaucrat	Oficial("Oficial", 5);
			Bureaucrat	Cadete("Cadete", 150);

			std:: cout << Tratado;
			std:: cout << General;
			std:: cout << Oficial;
			std:: cout << Cadete << "\n";

			// Form beSigned()
			Tratado.beSigned(General);
			// Tratado.beSigned(Oficial);
			// Tratado.beSigned(Cadete);
			// std:: cout << Tratado;
			
			// Bureaucrat signForm()
			// General.signForm(Tratado);
			// Oficial.signForm(Tratado);
			// Cadete.signForm(Tratado);


			std:: cout << Tratado;
			
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}
