#ifndef _COLORS
# define _COLORS
# define BLACK "\033[1;30m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN "\033[1;36m"
# define WHITE "\033[1;37m"
# define NC "\033[0m"

#endif // !_COLORS

// ShrubberyCreationForm declaration --------------------------------------------------------
#pragma once
#ifndef _SHRUBBERYCREATIONFORM_HPP
# define _SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;
	public:
		/*					Constructors					*/
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &other);

		/*					Operators					*/
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

		/*					Metods					*/
		void	execute(Bureaucrat const &executor) const;
		/*					Destructor					*/
		~ShrubberyCreationForm(void);
};

#endif // !_SHRUBBERYCREATIONFORM_HPP
