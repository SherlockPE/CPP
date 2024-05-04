#ifndef EX01_HPP
# define EX01_HPP

# include <iostream>
# include <string>
# include <string.h>
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

struct contact
{
	int		id;
	char	first_name[80];
	char	last_name[80];
	char	nick_name[80];
	char	phone_number[80];
	char	darkest_secret[300];
};

// void	get_input(char *message, char *input);
void	get_input(std::string message, char *input);
void	print_menu(void);
int		manage_options(char *input, contact *phone_list, int *end, int *index);
void    add_contact(contact *phone_list, int *index);
void    display_contacts(contact *phone_list, int *index);
void	print_title(void);
// int     manage_options(char *input, int *option);

//Utils
int ft_strcmp(std::string str1, std::string str2);


#endif