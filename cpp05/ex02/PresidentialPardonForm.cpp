/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:15:41 by flopez-r          #+#    #+#             */
/*   Updated: 2024/09/18 11:02:52 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

/*					Constructors					*/
PresidentialPardonForm::PresidentialPardonForm(void) :
	AForm ("PresidentialPardonForm", 25, 5),
	_target("Default")
{
	std::cout << GREEN "PresidentialPardonForm default constructor called" NC << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	AForm ("PresidentialPardonForm", 25, 5),
	_target(target)
{
	std::cout << GREEN "PresidentialPardonForm target constructor called" NC << std::endl;
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
	if (this == &other)
		return (*this);
	set_signed_value(other.get_signed_value());
	this->_target = other._target;
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
