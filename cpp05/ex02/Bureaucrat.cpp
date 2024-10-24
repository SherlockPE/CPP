#include "Bureaucrat.hpp"
#include "AForm.hpp"

/*					Constructors					*/
Bureaucrat::Bureaucrat(void) : m_name("I_dont_have_a_name"), m_grade(150)
{
	std::cout << GREEN "Bureaucrat default constructor called" NC << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : m_name(name)
{
	std::cout << GREEN "Bureaucrat name and grade constructor called" NC << std::endl;
	if (grade < 1)
		throw GradeToHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	m_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : m_name(other.m_name)
{
	std::cout << GREEN "Bureaucrat copy constructor called" NC << std::endl;
	*this = other;
}

/*					Operators					*/
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	if (this == &other){
		return (*this);
	}
	m_grade = other.m_grade;
	return (*this);
}

/*					Destructor					*/
Bureaucrat::~Bureaucrat(void)
{
	std::cout << RED "Bureaucrat destructor called" NC << std::endl;
}
std::ostream	&operator<<(std::ostream &os, const Bureaucrat &src)
{
	os << BLUE << src.getName() << 
	CYAN << ", bureaucrat grade: " << src.getGrade() << NC << std::endl;
	return (os);
}

/*					Metods					*/
std::string	Bureaucrat::getName(void) const
{
	return (m_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (m_grade);
}

void	 Bureaucrat::addGrade(void)
{
	m_grade--;
	if (m_grade < 1)
		throw (GradeToHighException());
	std::cout << YELLOW << "upgrading bureaucreat " << m_name << NC << std::endl;
}
void	 Bureaucrat::subGrade(void)
{
	m_grade++;
	if (m_grade > 150)
		throw (GradeTooLowException());
	std::cout << YELLOW << "demoting bureaucreat " << m_name << NC << std::endl;
}

void		Bureaucrat::signForm(AForm &formulary)
{
	std::cout << BLUE << m_name << NC;
	if (m_grade > formulary.get_grade_to_sign())
	{
		std::cout << " couldn't sign " << CYAN << formulary.get_form_name() << NC
		<< " because his grade is to low" << std::endl;
		throw (GradeTooLowException());
	}
	else if (formulary.get_signed_value())
	{
		std::cout << " couldn't sign " << CYAN << formulary.get_form_name() << NC
		<< " because its alredy signed" << std::endl;
		return ;
	}
	else if (m_grade <= formulary.get_grade_to_sign())
	{
		std::cout << " signed " << CYAN << formulary.get_form_name() << NC
		<< std::endl;
		formulary.beSigned(*this);
	}
}

void		Bureaucrat::executeForm(AForm const & form)
{
	if (!form.get_signed_value())
	{
		std::cout	<< this->m_name << MAGENTA
					<<"Can't execute 'couse the form need to be signed"
					<< NC << std::endl;
		return ;
	}
	if (m_grade <= form.get_grade_to_exec())
	{
		std::cout << this->m_name << MAGENTA << " executed " << form.get_form_name() << std::endl;
		form.execute(*this);
	}
	else
	{
		std::cout << m_name << "Can't execute the Form becouse it doesnt have enought grade" << std::endl;
		throw (GradeTooLowException());
	}
}

/*					Exceptions					*/

const char *	Bureaucrat::GradeToHighException::what() const throw()
{
	return ("Bureaucrat: The grade is to high");
}

const char *	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat: The grade is to low");
}
