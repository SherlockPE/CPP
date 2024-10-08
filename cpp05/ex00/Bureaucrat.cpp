#include "Bureaucrat.hpp"

/*					Constructors					*/
Bureaucrat::Bureaucrat(void) : m_name("I_dont_have_a_name"), m_grade(150)
{
	std::cout << GREEN "Bureaucrat default constructor called with a grade of 150" NC << std::endl;
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
	if (this == &other)
		return (*this);
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
	// std::cout << YELLOW "Bureaucrat getName metod called" NC << std::endl;
	return (m_name);
}

int	Bureaucrat::getGrade(void) const
{
	// std::cout << YELLOW "Bureaucrat getGrade metod called" NC << std::endl;
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

/*					Exceptions					*/

const char *	Bureaucrat::GradeToHighException::what() const throw()
{
	return ("The grade is to high");
}

const char *	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The grade is to low");
}
