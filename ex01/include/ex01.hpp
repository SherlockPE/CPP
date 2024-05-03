#ifndef EX01_HPP
# define EX01_HPP

# include <iostream>
# include <string.h>
# define TRUE 1
# define FALSE 0

struct contact
{
	char	first_name[80];
	char	last_name[80];
	char	nick_name[80];
	char	phone_number[80];
	char	darkest_secret[300];
};

void	get_input(char *input);
int		manage_options(char *input, contact *phone_list, int *end);
void    add_contact(contact *phone_list);
void    display_contacts(contact *phone_list);
// int     manage_options(char *input, int *option);


#endif