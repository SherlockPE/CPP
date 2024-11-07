/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:39:26 by flopez-r          #+#    #+#             */
/*   Updated: 2024/11/07 16:23:36 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <stack>

int main()
{
	{
		std::cout << WHITE << "MUTANT STACK TEST" << NC << std::endl;
			
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << YELLOW << "The first element in the list is: " << mstack.top() << NC << std::endl;
		mstack.pop();
		std::cout << YELLOW << "The size of the actual list is: " << mstack.size() << NC << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		// //[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << WHITE << "STD::LIST STACK TEST" << NC << std::endl;
			
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << YELLOW << "The first element in the list is: " << mstack.back() << NC << std::endl;
		mstack.pop_back();
		std::cout << YELLOW << "The size of the actual list is: " << mstack.size() << NC << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		// //[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
    return 0;
}

/* 
If you run it a first time with your MutantStack, and a second time replacing the
MutantStack with, for example, a std::list, the two outputs should be the same. Of
course, when testing another container, update the code below with the corresponding
member functions (push() can become push_back()).
10

 */


// int main (void)
// {
// 	// std::vector<int>	list_int;
// 	std::stack<int/* , std::list<int>  */>		list_stack;

// 	// list_int.reserve(10);
// 	list_stack.push(1);
// 	list_stack.push(2);
// 	list_stack.push(3);
// 	list_stack.push(4);

// 	while (!list_stack.empty())
// 	{
// 		std::cout << list_stack.top() << "\n";
// 		list_stack.pop();
// 	}

// 	// std::stack<int>::iterator it = list_stack.begin();
// }