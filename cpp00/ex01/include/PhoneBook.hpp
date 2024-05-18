
#pragma once
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>
# include <cstdlib>


# define MAX_CONTACTS 8
// Colors
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define CYAN "\033[0;36m"
# define WHITE "\033[1;97m"
# define RESET "\033[0m"
# define ORANGE "\033[38;5;208m"

std::string	get_input(std::string message);
std::string	get_int(std::string input);
void		put_line(int columns);
void		put_header(std::string color);

class PhoneBook
{
	private:
		int index;
		int actual_cant;
		Contact contacts[MAX_CONTACTS];

	public:
		void add_contact();
		static void exit_program(int exit_code);
		void put_row(int position);
		void print_contact_info(int id);
		void print_contact_table(void);
		void print_menu(void);
		void print_title(void);
		void search_contacts(void);
		PhoneBook(void);
};

#endif