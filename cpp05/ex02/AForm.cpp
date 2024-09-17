/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:02:36 by flopez-r          #+#    #+#             */
/*   Updated: 2024/09/16 14:20:09 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

/*					Constructors					*/
AForm::AForm(std::string name, int sign_grade, int exec_grade) :
	m_name(name),
	m_sign_grade(sign_grade),
	m_exec_grade(exec_grade)
{
	if (sign_grade < 1 || exec_grade < 1)
		throw (GradeToHighException());
	if (sign_grade > 150 || exec_grade > 150)
		throw (GradeTooLowException());
	this->m_sign = false;
	std::cout << GREEN "AForm default constructor called" NC << std::endl;
}

AForm::AForm(AForm const &other) :
	m_name(other.m_name),
	m_sign_grade(other.m_sign_grade),
	m_exec_grade(other.m_exec_grade)
{
	std::cout << GREEN "AForm copy constructor called" NC << std::endl;
	*this = other;
}

/*					Operators					*/
AForm &AForm::operator=(AForm const &other)
{
	if (this == &other)
		return (*this);
	this->m_sign = other.m_sign;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, const AForm &other)
{
	os	<< "FORM->" << CYAN << other.get_form_name() << NC
		<< ", Grade to sign [" << YELLOW << other.get_grade_to_sign() << NC << "]"
		<< ", Grade to exec [" << YELLOW << other.get_grade_to_exec() << NC << "]"
		<< ", Signed [" ;
	if (other.get_signed_value())
		os << GREEN << "YES" << NC;
	else
		os << RED << "NO" << NC;
	os << "]" << std::endl;
	return (os);
}

/*					Destructor					*/
AForm::~AForm(void) {
	std::cout << RED "AForm destructor called" NC << std::endl;
}

/*					Metods					*/
int			AForm::get_grade_to_sign(void) const
{
	return (m_sign_grade);
}
int			AForm::get_grade_to_exec(void) const
{
	return (m_exec_grade);
}
bool		AForm::get_signed_value(void) const
{
	return (m_sign);
}
std::string	AForm::get_form_name(void) const
{
	return (m_name);
}

//Setters
void	AForm::set_signed_value(bool value)
{
	m_sign = value;
}

void		AForm::beSigned(Bureaucrat &buro)
{
	if (buro.getGrade() > m_sign_grade)
		throw (GradeTooLowException());
	else if (buro.getGrade() <= m_sign_grade)
		m_sign = true;
}

void		AForm::execute(Bureaucrat const &executor) const
{
	if (m_sign == false)
	{
		std::cout	<< executor.getName() << MAGENTA
					<<"Can't execute 'couse the form need to be signed"
					<< NC << std::endl;
		return ;
	}
	if (executor.getGrade() <= m_exec_grade)
		std::cout << "Default execute for AForm (Nothing happens)" << std::endl;
	else
	{
		std::cout << executor.getName() << "Can't execute the Form becouse it doesnt have enought grade" << std::endl;
		throw (GradeTooLowException());
	}
}

/*					Exceptions					*/
const char *AForm::GradeToHighException::what() const throw()
{
	return ("AForm: The Grade is to High");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("AForm: The Grade is to Low");
}
