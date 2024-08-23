#include "Bureaucrat.hpp"

/*					Constructors					*/
Bureaucrat::Bureaucrat(void) : m_name("Name"), m_grade(150)
{
	std::cout << GREEN "Bureaucrat default constructor called" NC << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : m_name(name)
{
	std::cout << GREEN "Bureaucrat name and grade constructor called" NC << std::endl;
	if (grade < 1 || grade > 150)
		throw ("hoasdkasdlá");
	m_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
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
	// DO THINGS
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat &src)
{
	os << "bureaucrat grade: " << src.getGrade() << std::endl;
}

/*					Destructor					*/
Bureaucrat::~Bureaucrat(void)
{
	std::cout << RED "Bureaucrat destructor called" NC << std::endl;
}

/*					Metods					*/
std::string	Bureaucrat::getName(void)
{
	std::cout << YELLOW "Bureaucrat getName metod called" NC << std::endl;
	return (m_name);
}

int	Bureaucrat::getGrade(void)
{
	std::cout << YELLOW "Bureaucrat getGrade metod called" NC << std::endl;
	return (m_grade);
}
