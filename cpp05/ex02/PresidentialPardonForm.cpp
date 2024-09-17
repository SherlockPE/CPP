/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:15:41 by flopez-r          #+#    #+#             */
/*   Updated: 2024/09/17 18:28:37 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

/*					Constructors					*/
PresidentialPardonForm::PresidentialPardonForm(std::string name, int sign_grade, int exec_grade) :
	AForm(name, sign_grade, exec_grade)
{
	if (sign_grade < 1 || exec_grade < 1)
		throw (GradeToHighException());
	if (sign_grade > 25 || exec_grade > 5)
		throw (GradeTooLowException());
	std::cout << GREEN "PresidentialPardonForm default constructor called" NC << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) :
	AForm(other.get_form_name(), other.get_grade_to_sign(), other.get_grade_to_exec())
{
	std::cout << GREEN "PresidentialPardonForm copy constructor called" NC << std::endl;
	*this = other;
}

/*					Operators					*/
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	if (this == &other){
		return (*this);
	}
	set_signed_value(other.get_signed_value());
	return (*this);
}

/*					Destructor					*/
PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << RED "PresidentialPardonForm destructor called" NC << std::endl;
}

/*					Metods					*/
void		PresidentialPardonForm::execute(Bureaucrat const &executor) const
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
	std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
