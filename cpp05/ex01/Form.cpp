/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:02:36 by flopez-r          #+#    #+#             */
/*   Updated: 2024/09/12 18:00:59 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*					Constructors					*/
Form::Form(std::string name, int sign_grade, int exec_grade) : m_name(name), m_sign_grade(sign_grade), m_exec_grade(exec_grade)
{
	if (sign_grade < 1 || exec_grade < 1)
		throw (GradeToHighException());
	if (sign_grade > 150 || exec_grade > 150)
		throw (GradeTooLowException());
	this->m_sign = false;
	std::cout << GREEN "Form default constructor called" NC << std::endl;
}

Form::Form(Form const &other) : m_name(other.m_name) , m_sign_grade(other.m_sign_grade), m_exec_grade(other.m_exec_grade)
{
	std::cout << GREEN "Form copy constructor called" NC << std::endl;
	*this = other;
}

/*					Operators					*/
Form &Form::operator=(Form const &other)
{
	if (this == &other){
		return (*this);
	}
	this->m_sign = other.m_sign;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const Form other)
{
	os	<< "┌──────────" << "FORM - " << other.get_form_name() << "──────────┐\n"
		<< "│																 │\n"
		<< "│	Grade required to sign it : " << other.get_grade_to_sign() <<  "│\n"
		<< "│	Grade required to execute it : " << other.get_grade_to_exec() <<  "│\n"
		<< "│	Signed : " ;
	if (other.get_signed_value())
		os << GREEN << "YES" << NC;
	else
		os << RED << "NO" << NC;
	return (os);
}


/*					Destructor					*/
Form::~Form(void) {
	std::cout << RED "Form destructor called" NC << std::endl;
}

/*					Metods					*/
int			Form::get_grade_to_sign(void) const {return (m_sign_grade);}
int			Form::get_grade_to_exec(void) const {return (m_exec_grade);}
bool		Form::get_signed_value(void) const {return (m_sign);}
std::string	Form::get_form_name(void) const {return (m_name);}
