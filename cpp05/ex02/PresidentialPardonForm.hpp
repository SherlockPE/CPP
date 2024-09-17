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

// PresidentialPardonForm declaration --------------------------------------------------------
#pragma once
#ifndef _PRESIDENTIALPARDONFORM_HPP
# define _PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		/*					Constructors					*/
		PresidentialPardonForm(std::string name, int sign_grade, int exec_grade);
		PresidentialPardonForm(PresidentialPardonForm const &other);

		/*					Operators					*/
		PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

		/*					Metods					*/
		void	execute(Bureaucrat const &executor) const;

		/*					Destructor					*/
		~PresidentialPardonForm(void);
};

#endif // !_PRESIDENTIALPARDONFORM_HPP
