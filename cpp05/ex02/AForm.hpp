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
// AForm declaration --------------------------------------------------------
#pragma once
#ifndef _AForm_HPP
# define _AForm_HPP
# include <iostream>
# include <iomanip>

class Bureaucrat;

class AForm
{
	private:
		bool				m_sign;
		std::string	const	m_name;
		int	const			m_sign_grade;
		int	const			m_exec_grade;
	public:
		/*					Constructors					*/
		AForm(std::string name, int sign_grade, int exec_grade);
		AForm(AForm const &other);
		/*					Operators					*/
		AForm &operator=(AForm const &other);
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
		/*					Metods					*/

		//Getters
		int					get_grade_to_sign(void) const;
		int					get_grade_to_exec(void) const;
		bool				get_signed_value(void) const;
		std::string			get_form_name(void) const;
		//Setters
		void				set_signed_value(bool value);

		void				beSigned(Bureaucrat &buro);
		virtual void		execute(Bureaucrat const &executor) const = 0; //Pure virtual function
		/*					Destructor					*/
		~AForm(void);
};

std::ostream	&operator<<(std::ostream &os, const AForm &other);

#endif // !_AForm_HPP