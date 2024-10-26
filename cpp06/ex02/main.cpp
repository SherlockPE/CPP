/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:46:06 by flopez-r          #+#    #+#             */
/*   Updated: 2024/10/24 16:35:46 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <typeinfo>

Base * generate(void)
{
	int	random_num;

	std::srand(time(0));
	// std::srand(0);
	random_num = std::rand() % 3;
	if (random_num == 0)
	{
		std::cout << YELLOW << "Estoy devolviendo la clase A " << NC << std::endl;
		return (new A());
	}
	else if (random_num == 1)
	{
		std::cout << YELLOW << "Estoy devolviendo la clase B " << NC << std::endl;
		return (new B());
	}
	else if (random_num == 2)
	{
		std::cout << YELLOW << "Estoy devolviendo la clase C " << NC << std::endl;
		return (new C());
	}
	return (NULL);
}


void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
	{
		std::cout << GREEN << "Es la clase A" << NC << std::endl;
		return ;
	}
	else if (dynamic_cast<B *>(p))
	{
		std::cout << GREEN << "Es la clase B" << NC << std::endl;
		return ;
	}
	else if (dynamic_cast<C *>(p))
	{
		std::cout << GREEN << "Es la clase C" << NC << std::endl;
		return ;
	}
	else 
		std::cout << GREEN << "Not recognized" << NC << std::endl;
}

void identify(Base& p)
{
	A	a_ref;
	B	b_ref;
	C	c_ref;

	try 
	{
		a_ref = dynamic_cast<A&>(p);
		std::cout << CYAN << "Es la clase A" << NC << std::endl;
	}
	catch (std::bad_cast)
	{
		try 
		{
			b_ref = dynamic_cast<B&>(p);
			std::cout << CYAN << "Es la clase B" << NC << std::endl;
		}
		catch (std::bad_cast)
		{
			try 
			{
				c_ref = dynamic_cast<C&>(p);
				std::cout << CYAN << "Es la clase C" << NC << std::endl;
			}
			catch (std::bad_cast)
			{
				std::cout << CYAN << "Not recognized" << NC << std::endl;
			}
		}
	}
}

int main(void)
{
	Base	*random_class;
	{
		std::cout << "Probando Identify con punteros" << std::endl;

		random_class = generate();

		identify(random_class);

		delete random_class;
	}
	{
		std::cout << "Probando Identify con referencias" << std::endl;

		random_class = generate();


		identify(*random_class);
		delete random_class;
	}
	return (EXIT_SUCCESS);
}

