#ifndef EX01_HPP
# define EX01_HPP

# include <iomanip>
# include <iostream>
# include <string.h>
# include <string>
# define WSIZE 10
# define TRUE 1
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

//Table color
# define G_COLOR CYAN
# define COLUM_CLR G_COLOR
# define ROW_CLOR G_COLOR

//Table character
# define COLUM_CHAR "|"
# define ROW_CHAR "-"

class	contact
{
	public:
		int	id;
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
	    void set_values (int id, std::string name, std::string lname, std::string nickname, std::string number, std::string d_secret);
	// void print_values (void);
};

class PhoneBook
{
	public:
    	int	index;
    	std::string 	input;
		contact contacts[MAX_CONTACTS];

        void	put_row(int position);
        void	print_contact_table(void);
        void	add_contact();
        void	search_contacts(void);
        void    exit_program(int exit_code);
        void	print_menu(void);
        void	print_title(void);
};

std::string get_input(std::string message);
std::string	get_int(std::string input);

// void	print_menu(void);
// int		manage_options(std::string input, contact *phone_list, int *end, int *index);
void     manage_options(PhoneBook *agenda);

// Utils
int		ft_strcmp(std::string str1, std::string str2);
int		ft_strlen(std::string str);
std::string string_upper(std::string string);
void	print_col(std::string string, std::string color);
void	put_field(std::string content);

int	ft_atoi(std::string str);
void	put_line(int columns);
void	put_header(std::string color);
// void	put_row(contact *phone_list, int position);
void	put_separator(void);

#endif