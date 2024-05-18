#ifndef EX01_HPP
# define EX01_HPP

# include <string>
# include "PhoneBook.hpp"
# include "Contact.hpp"

// Table color
# define G_COLOR CYAN
# define COLUM_CLR G_COLOR
# define ROW_CLOR G_COLOR

// Table character
# define COLUM_CHAR "|"
# define ROW_CHAR "-"

// SRC
void	manage_options(PhoneBook *agenda, std::string input);

// Utils
int			ft_atoi(std::string str);
void		print_col(std::string string, std::string color);
std::string string_upper(std::string string);
void		put_separator(void);

#endif