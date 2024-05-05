#ifndef EX01_HPP
# define EX01_HPP

# include <iomanip>
# include <iostream>
# include <string.h>
# include <string>
# define WSIZE 10
# define TRUE 1
# define FALSE 0

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

struct	contact
{
	int	id;
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
};

std::string get_input(std::string message);
void	print_menu(void);
int		manage_options(std::string input, contact *phone_list, int *end, int *index);
void	add_contact(contact *phone_list, int *index);
// void	display_contacts(contact *phone_list, int *index);
void	search_contacts(contact *phone_list, int *index);
void    print_contact_table(contact *phone_list, int *index);
void	print_title(void);

// Utils
int		ft_strcmp(std::string str1, std::string str2);
int		ft_strlen(std::string str);
std::string string_upper(std::string string);
void	print_col(std::string string, std::string color);
void	put_field(std::string content);

#endif