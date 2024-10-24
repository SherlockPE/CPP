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

Base * generate(void)
{
	int	random_num;

	std::srand(time(0));
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
	A	*A_class;
	B	*B_class;
	C	*C_class;

	A_class = dynamic_cast<A *>(p);
	if (A_class)
	{
		std::cout << GREEN << "Es la clase A" << NC << std::endl;
		return ;
	}
	B_class = dynamic_cast<B *>(p);
	if (B_class)
	{
		std::cout << GREEN << "Es la clase B" << NC << std::endl;
		return ;
	}
	C_class = dynamic_cast<C *>(p);
	if (A_class)
	{
		std::cout << GREEN << "Es la clase C" << NC << std::endl;
		return ;
	}
}

// void identify(Base& p)
// {
	
// }

int main(void)
{
	Base	*random_class;

	random_class = generate();

	identify(random_class);

	delete random_class;

	return (EXIT_SUCCESS);
}

