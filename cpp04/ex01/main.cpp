/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:09:44 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/21 14:20:23 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "===============Subject Test===============\n";
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	{
		std::cout << "===============Leaks Test===============\n";
		Animal	*animals[10];
		size_t	cant = 6;
		std::cout << "--------------Constructors--------------" << std::endl;
		for (size_t i = 0; i < cant; i++)
		{
			std::cout << "__________"<< std::endl;
			std::cout << "value: " << i + 1 << std::endl;
			if (i < (cant / 2))
				animals[i] = new Cat();
			else
				animals[i] = new Dog();
			std::cout << "__________"<< std::endl;
		}
		std::cout << "--------------Destructors--------------" << std::endl;
		for (size_t i = 0; i < cant; i++)
		{
			std::cout << "__________"<< std::endl;
			std::cout << "value: " << i + 1 << std::endl;
			delete animals[i];
			std::cout << "__________"<< std::endl;
		}
	}
	{
		std::cout << "===============Deep copy Test===============\n";
		Dog doggy;
	}
	return 0;
}