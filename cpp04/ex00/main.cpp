/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 13:09:44 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/21 12:33:15 by flopez-r         ###   ########.fr       */
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
		const Animal* kitten = new Cat();
		// const Animal* doggy = new Dog();
		// std::cout << doggy->getType() << std::endl;
		std::cout << kitten->getType() << std::endl;
		kitten->makeSound(); //will output the cat sound!
		// doggy->makeSound(); //will output the Dog sound!
		meta->makeSound();
	}
	{
		std::cout << "===============Incorrect Animal===============\n";
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* kitten = new WrongCat();
		std::cout << kitten->getType() << " " << std::endl;
		kitten->makeSound(); //will output the cat Wrong animal sound!
		meta->makeSound();
	}
	return 0;
}