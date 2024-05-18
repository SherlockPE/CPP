/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:09:44 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/18 18:50:22 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

//--------------Metods------------------

void	PhoneBook::print_title(void)
{
	std::cout << WHITE;
	std::cout << "======================================================";
	std::cout << "=======\n __  __\n|  \\/  |_   _    __ ";
	std::cout << "___      _____  ___  ___  _ __ ___   ___\n| |\\/| | | | |";
	std::cout << "  / _` \\ \\ /\\ / / _ \\/ __|/ _ \\| '_ ` _ \\ / _ \\\n";
	std::cout << "| |  | | |_| | | (_| |\\ V  V /  __/\\__ \\ (_) | | |";
	std::cout << " | | |  __/\n|_|  |_|\\__, |  ";
	std::cout << "\\__,_| \\_/\\_/ \\___||___/\\___/|_| |_| |_|\\___|\n";
	std::cout << "        |___/\n";
	std::cout << " ____  _                       _                 _\n|  _ \\|";
	std::cout << " |__   ___  _ __   ___| |__   ___   ___ | | __ \n| |_) |";
	std::cout << " '_ \\ / _ \\| '_ \\ / _ \\ '_ \\ / _ \\ / _ \\| |/ /\n|  __";
	std::cout << "/| | | | (_) | | | |  __/ |_) | (_) | (_) |   <      \n|_|";
	std::cout << "   |_| |_|\\___/|_| |_|\\___|_.__/ \\___/ \\___/|_|\\_\\\n";
	std::cout << "\n========";
	std::cout << "=====================================================\n";
	std::cout << RESET;
}


void	PhoneBook::add_contact()
{
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "\n\n YOU ARE ADDING A NEW CONTACT\n\n";
	first_name = get_input("First name: ");
	last_name = get_input("Last name: ");
	nick_name = get_input("nick name: ");
	phone_number = get_int("phone number: ");
	darkest_secret = get_input("darkest_secret: ");
	if (index < MAX_CONTACTS)
	{
		contacts[index].set_values(first_name, last_name, nick_name, phone_number, darkest_secret);
		if (actual_cant  < MAX_CONTACTS)
			actual_cant++;
	}
	else
	{
		index = 0;
		contacts[index].set_values(first_name, last_name, nick_name, phone_number, darkest_secret);
	}
	index++;
}

void    PhoneBook::exit_program(int exit_code)
{
    print_col("Saliendo......\n", MAGENTA);
    exit(exit_code);
}

void	PhoneBook::print_contact_table(void)
{
	int	i;
	int	columns;

	i = 0;
	columns = 4;
	put_line((WSIZE * columns) + columns + 1);
	put_header(CYAN);
	put_line((WSIZE * columns) + columns + 1);
	while (i < actual_cant)
	{
		put_row(i);
		put_line((WSIZE * columns) + columns + 1);
		i++;
	}
}

void	PhoneBook::print_menu(void)
{
	std::cout << "\nPlease write one of the following commands: \n";
	print_col("ADD", GREEN);
	std::cout << " to add a contact\n";
	print_col("SEARCH", GREEN);
	std::cout <<  " to display a list of your contacts\n";
	print_col("EXIT", GREEN);
	std::cout << " to exit program\n";
}

//--------------------------------------

//--------------Constructor-------------
PhoneBook::PhoneBook(void)
{
    index = 0;
    actual_cant = 0;
}
//--------------------------------------
