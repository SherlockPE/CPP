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

// Bureaucrat declaration --------------------------------------------------------
#pragma once

#ifndef _BUREAUCRAT_HPP
# define _BUREAUCRAT_HPP
# include <iostream>
class AForm;

class Bureaucrat
{
	private:
		std::string const	m_name;
		int					m_grade;
	public:
		/*					Constructors					*/
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat(std::string name, int grade);

		/*					Operators					*/
		Bureaucrat &operator=(Bureaucrat const &other);

		/*					Metods					*/
		void		addGrade(void);
		void		subGrade(void);
		std::string	getName(void) const;
		int			getGrade(void) const;
		void		signForm(AForm &formulary);
		void		executeForm(AForm const & form);

		/*					Exceptions					*/
		class GradeToHighException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		/*					Destructor					*/
		~Bureaucrat(void);
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &src);

#endif // !_BUREAUCRAT_HPP
