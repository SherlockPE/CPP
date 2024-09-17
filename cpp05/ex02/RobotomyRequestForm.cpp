/* ********************************	std::cout << GREEN "RobotomyRequestForm copy constructor called" NC << std::endl;
	*this = other;****************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:25:25 by flopez-r          #+#    #+#             */
/*   Updated: 2024/09/17 16:29:22 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

/*					Constructors					*/
RobotomyRequestForm::RobotomyRequestForm(std::string name, int sign_grade, int exec_grade) :
	AForm(name, sign_grade, exec_grade)
{
	std::cout << GREEN "RobotomyRequestForm default constructor called" NC << std::endl;
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
	int random_num = std::rand() % 3;
	std::cout << "random number is--> " << random_num << "\n\n";
	if (random_num <= 1)
		std::cout << executor.getName() << " has been robotomized successfully 🤖" << std::endl;
	else
		std::cout << executor.getName() << " has" << RED << " NOT " << NC << "been robotomized" << std::endl;
}
