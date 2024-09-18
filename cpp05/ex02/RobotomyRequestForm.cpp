/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:24:25 by flopez-r          #+#    #+#             */
/*   Updated: 2024/09/18 11:37:43 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

/*					Constructors					*/
RobotomyRequestForm::RobotomyRequestForm(void) :
	AForm("RobotomyRequestForm", 72, 45),
	_target("default")
{
	std::cout << GREEN "RobotomyRequestForm default constructor called" NC << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	AForm("RobotomyRequestForm", 72, 45),
	_target(target)
{
	std::cout << GREEN "RobotomyRequestForm target constructor called" NC << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other):
	AForm(other.get_form_name(), other.get_grade_to_sign(), other.get_grade_to_exec())
{
	std::cout << GREEN "RobotomyRequestForm copy constructor called" NC << std::endl;
	*this = other;
}

/*					Operators					*/
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	if (this == &other)
		return (*this);
	set_signed_value(other.get_signed_value());
	this->_target = other._target;
	return (*this);
}

/*					Destructor					*/
RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << RED "RobotomyRequestForm destructor called" NC << std::endl;
}

/*					Metods					*/
void		RobotomyRequestForm::execute(Bureaucrat const &executor) const
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
	std::srand(time(0));
	int random_num = std::rand() % 2;
	if (random_num < 1)
		std::cout << _target << " has been robotomized successfully 🤖" << std::endl;
	else
		std::cout << _target << " has" << RED << " NOT " << NC << "been robotomized" << std::endl;
}
