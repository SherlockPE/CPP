/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:02:36 by flopez-r          #+#    #+#             */
/*   Updated: 2024/09/16 14:20:09 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

/*					Constructors					*/
Form::Form(std::string name, int sign_grade, int exec_grade) :
	m_name(name),
	m_sign_grade(sign_grade),
	m_exec_grade(exec_grade)
{
	if (sign_grade < 1 || exec_grade < 1)
		throw (GradeToHighException());
	if (sign_grade > 150 || exec_grade > 150)
		throw (GradeTooLowException());
	this->m_sign = false;
	std::cout << GREEN "Form default constructor called" NC << std::endl;
}

Form::Form(Form const &other) :
	m_name(other.m_name),
	m_sign_grade(other.m_sign_grade),
	m_exec_grade(other.m_exec_grade)
{
	std::cout << GREEN "Form copy constructor called" NC << std::endl;
	*this = other;
}

/*					Operators					*/
Form &Form::operator=(Form const &other)
{
	if (this == &other)
		return (*this);
	this->m_sign = other.m_sign;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const Form &other)
{
	int lenght = (other.get_form_name()).length() + 10;

	os	<< "┌─── " << "FORM - " << CYAN << other.get_form_name() << NC"\n"
		<< "│\n"
		<< "│" << std::setw(lenght) << "Grade to sign it: " << YELLOW << other.get_grade_to_sign() << NC << "\n"
		<< "│" << std::setw(lenght) << "Grade to execute it: " << YELLOW << other.get_grade_to_exec() << NC << "\n"
		<< "│" << std::setw(lenght) << "Signed : " ;
	if (other.get_signed_value())
		os << GREEN << "YES\n" << NC;
	else
		os << RED << "NO\n" << NC;
	os << "└";
	for (int i = 0; i < lenght; i++)
		os << "─";
	os << ">" << std::endl;
	return (os);
}

/*					Destructor					*/
Form::~Form(void) {
	std::cout << RED "Form destructor called" NC << std::endl;
}

/*					Metods					*/
int			Form::get_grade_to_sign(void) const
{
	return (m_sign_grade);
}
int			Form::get_grade_to_exec(void) const
{
	return (m_exec_grade);
}
bool		Form::get_signed_value(void) const
{
	return (m_sign);
}
std::string	Form::get_form_name(void) const
{
	return (m_name);
}

void		Form::beSigned(Bureaucrat &buro)
{
	if (buro.getGrade() > m_sign_grade)
		throw (GradeTooLowException());
	else if (buro.getGrade() <= m_sign_grade)
		m_sign = true;
}

/*					Exceptions					*/
const char *Form::GradeToHighException::what() const throw()
{
	return ("Form: The Grade is to High");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form: The Grade is to Low");
}
