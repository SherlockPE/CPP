#ifndef _COLORS
# define _COLORS
# define BLACK "\033[1;30m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN "\033[1;36m"
# define LIGHT_CYAN "\033[1;96m"
# define WHITE "\033[1;37m"
# define NC "\033[0m"
#endif // !_COLORS
// Form declaration --------------------------------------------------------
#pragma once
#ifndef _FORM_HPP
# define _FORM_HPP
# include <iostream>
# include "GradeToHighException.hpp"
# include "GradeTooLowException.hpp"
// # include "Bureaucrat.hpp"
# include <iomanip>

class Bureaucrat;

class Form
{
	private:
		bool				m_sign;
		std::string	const	m_name;
		int	const			m_sign_grade;
		int	const			m_exec_grade;
	public:
		/*					Constructors					*/
		// Form(void);
		Form(std::string name, int sign_grade, int exec_grade);
		Form(Form const &other);
		/*					Operators					*/
		Form &operator=(Form const &other);
		/*					Metods					*/
		int			get_grade_to_sign(void) const;
		int			get_grade_to_exec(void) const;
		bool		get_signed_value(void) const;
		std::string	get_form_name(void) const;
		void		beSigned(Bureaucrat &buro);
		/*					Destructor					*/
		~Form(void);
};

std::ostream	&operator<<(std::ostream &os, const Form other);

#endif // !_FORM_HPP