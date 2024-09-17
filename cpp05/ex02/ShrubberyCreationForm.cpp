/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:45:28 by flopez-r          #+#    #+#             */
/*   Updated: 2024/09/17 16:34:35 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

/*					Constructors					*/
ShrubberyCreationForm::ShrubberyCreationForm(std::string name, int sign_grade, int exec_grade) : 
	AForm(name, sign_grade, exec_grade)
{
	std::cout << GREEN "ShrubberyCreationForm default constructor called" NC << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other):
	AForm(other.get_form_name(), other.get_grade_to_sign(), other.get_grade_to_exec())
{
	std::cout << GREEN "ShrubberyCreationForm copy constructor called" NC << std::endl;
	*this = other;
}

/*					Operators					*/
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	if (this == &other)
		return (*this);
	set_signed_value(other.get_signed_value());
	return (*this);
}

/*					Destructor					*/
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << RED "ShrubberyCreationForm destructor called" NC << std::endl;
}

/*					Metods					*/
void		ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (get_signed_value() == false)
	{
		std::cout << executor.getName() << MAGENTA << "Can't execute 'couse the form need to be signed" << NC << std::endl;
		return ;
	}
	if (executor.getGrade() > get_grade_to_exec())
	{
		std::cout << executor.getName() << MAGENTA << "Can't execute the Form becouse it doesnt have enought grade" << NC << std::endl;
		throw (GradeTooLowException());
	}
	//Execution
	std::string		name_archive = get_form_name() + "_shrubbery";
	std::string		tree_draw = "\
	               ,@@@@@@@,\n\
	       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
	    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
	   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
	   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
	   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
	 `&%\\ ` /%&'    |.|        \\ '|8'\n\
	       |o|        | |         | |\n\
	       |.|        | |         | |\n\
	jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";
	std::ofstream	archive(name_archive.c_str());
	if (!archive)
	{
		std::cout << RED << "Error trying to create the file\n" << NC;
		return ;
	}
	archive << tree_draw;
	std::cout	<< BLUE << executor.getName() << NC << " executed " << get_form_name() << std::endl;
}
