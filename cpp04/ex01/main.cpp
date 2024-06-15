/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:09:44 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/15 15:58:36 by flopez-r         ###   ########.fr       */
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
		for (size_t i = 0; i < 100; i++)
		{
			if (i < 50)
			{
				
			}
			else
			{
				
			}
		}
	}
	// {
	// 	std::cout << "===============Incorrect Animal===============\n";
	// 	const WrongAnimal* meta = new WrongAnimal();
	// 	const WrongAnimal* i = new WrongCat();
	// 	std::cout << i->getType() << " " << std::endl;
	// 	i->makeSound(); //will output the cat Wrong animal sound!
	// 	meta->makeSound();
	// }
	return 0;
}