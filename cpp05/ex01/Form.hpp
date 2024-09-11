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

// Form declaration --------------------------------------------------------
#pragma once
#ifndef _FORM_HPP
# define _FORM_HPP
# include <iostream>


class Form
{
	private:
		bool				sign;
		std::string	const	m_name;
		int	const			grade_to_sign;
		int	const			grade_to_exec;
	public:
		/*					Constructors					*/
		Form(void);
		Form(Form const &other);

		/*					Operators					*/
		Form &operator=(Form const &other);

		/*					Metods					*/


		/*					Destructor					*/
		~Form(void);
};

#endif // !_FORM_HPP
