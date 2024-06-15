/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:09:44 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/15 14:16:55 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "===============Correct Animal===============\n";
		const Animal* meta = new Animal();
		const Animal* i = new Cat();
		// const Animal* j = new Dog();
		// std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		// j->makeSound();
		meta->makeSound();
	}
	{
		std::cout << "===============Incorrect Animal===============\n";
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat Wrong animal sound!
		meta->makeSound();
	}
	return 0;
}