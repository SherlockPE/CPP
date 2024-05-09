#ifndef EX01_HPP
# define EX01_HPP

# include <iomanip>
# include <iostream>
# include <string.h>
# include <string>
# define WSIZE 10
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

// Table color
# define G_COLOR CYAN
# define COLUM_CLR G_COLOR
# define ROW_CLOR G_COLOR

// Table character
# define COLUM_CHAR "|"
# define ROW_CHAR "-"

class contact
{
  public:
	int id;
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
	void set_values(std::string name, std::string lname, std::string nickname,
		std::string number, std::string d_secret);
	// void print_values (void);
};

class PhoneBook
{
  public:
	int index;
	int actual_cant;
	std::string input;
	contact contacts[MAX_CONTACTS];

	void	add_contact();
	void	exit_program(int exit_code);
	void	put_row(int position);
	void	print_contact_info(int id);
	void	print_contact_table(void);
	void	print_menu(void);
	void	print_title(void);
	void	search_contacts(void);
};

//SRC
void		manage_options(PhoneBook *agenda);

// Utils
int			ft_atoi(std::string str);
int			ft_strcmp(std::string str1, std::string str2);
int			ft_strlen(std::string str);
std::string get_input(std::string message);
std::string get_int(std::string input);
void		print_col(std::string string, std::string color);
void		put_field(std::string content);
void		put_header(std::string color);
void		put_line(int columns);
std::string string_upper(std::string string);
void		put_separator(void);

// void	put_row(contact *phone_list, int position);

#endif