/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:17:54 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/24 17:26:33 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

int main(void)
{

	{
		std::cout << "───────────────────────────SUBJECT TEST───────────────────────────\n";
		IMateriaSource* src = new MateriaSource();

		Ice *ice = new Ice();
		Cure *cure = new Cure();

		src->learnMateria(ice);
		src->learnMateria(cure);

		delete ice;
		delete cure;

		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << "───────────────────────────OWN TESTS───────────────────────────\n";
		
		IMateriaSource* src = new MateriaSource();


		Ice *ice = new Ice();
		Cure *cure = new Cure();
		
		src->learnMateria(ice);
		src->learnMateria(cure);
		src->learnMateria(ice);

		delete ice;
		delete cure;

		
		// Cure *ptr = Cure();
		// src->learnMateria(&ptr);
		// delete ptr;
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		// tmp = src->createMateria("ANTIMATERIA");
		// delete tmp;
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		delete bob;
		delete me;
		delete src;
	}
	return (0);
}
// {
// 	// Constructors
// 	std::cout << std::endl;
// 	std::cout << "CONSTRUCTORS:" << std::endl;
// 	std::cout << "-----------------------" << std::endl;
// 	IMateriaSource *src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter *me = new Character("me");
// 	std::cout << std::endl;

// 	// Create Materia
// 	std::cout << "CREATE MATERIA:" << std::endl;
// 	std::cout << "-----------------------" << std::endl;
// 	AMateria *tmp;

// 	AMateria *tmp1;
// 	AMateria *tmp2;
// 	AMateria *tmp3;
// 	// AMateria *tmp4;

// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp1 = src->createMateria("cure");
// 	me->equip(tmp1);
// 	tmp = src->createMateria("fire"); // null
// 	me->equip(tmp);
// 	std::cout << std::endl;

// 	// Use on a new character
// 	std::cout << "USE ON A NEW CHARACTER:" << std::endl;
// 	std::cout << "-----------------------" << std::endl;
// 	ICharacter *bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	std::cout << std::endl;
// 	me->use(2, *bob); // Use an empty / non existing slot in inventory
// 	me->use(-4, *bob);
// 	me->use(18, *bob);
// 	std::cout << std::endl;

// 	// Deep copy character
// 	std::cout << "DEEP COPY CHARACTER:" << std::endl;
// 	std::cout << "-----------------------" << std::endl;
// 	Character *charles = new Character("Charles");
// 	tmp2 = src->createMateria("cure");
// 	charles->equip(tmp2);
// 	tmp3 = src->createMateria("ice");
// 	charles->equip(tmp3);
// 	tmp = src->createMateria("earth");
// 	charles->equip(tmp);
// 	Character *charles_copy = new Character(*charles);
// 	std::cout << std::endl;

// 	// Deep copy vs its source character
// 	std::cout << "DEEP COPY VS SOURCE:" << std::endl;
// 	std::cout << "-----------------------" << std::endl;
// 	charles->unequip(
// 		0); // this shows that they have different materia pointers equipped
// 	// tmp4 = charles_copy->getMateriaFromInventory(1);
// 	charles_copy->unequip(1); // this will produce a leak if we don't store
// 								// the address somewhere else before
// 	// delete tmp4;
// 	tmp = src->createMateria("cure");
// 	charles_copy->equip(tmp);
// 	tmp = src->createMateria("ice");
// 	charles_copy->equip(tmp);
// 	std::cout << std::endl;

// 	charles->use(0, *bob);
// 	charles->use(1, *bob);
// 	charles->use(2, *bob);
// 	charles->use(3, *bob);
// 	std::cout << std::endl;
// 	charles_copy->use(0, *bob);
// 	charles_copy->use(1, *bob);
// 	charles_copy->use(2, *bob);
// 	charles_copy->use(3, *bob);
// 	std::cout << std::endl;

// 	// Unequip tests:
// 	std::cout << "UNEQUIP:" << std::endl;
// 	std::cout << "-----------------------" << std::endl;
// 	me->unequip(-1); // unequip an empty / non existing slot in inventory 
// 	me->unequip(18); me->unequip(3); std::cout << std::endl;
// 	me->use(1, *charles);
// 	me->unequip(1); // Unequip a valid slot in inventory (cure unequipped) 
// 	me->use(1, *charles); // try to use it std::cout << std::endl;

// 	// Destructors
// 	std::cout << "DESTRUCTORS:" << std::endl;
// 	std::cout << "-----------------------" << std::endl;
// 	delete bob;
// 	delete me;
// 	delete src;
// 	delete charles;
// 	delete charles_copy;
// 	delete tmp1;
// 	delete tmp2;
// 	std::cout << std::endl;
// }

