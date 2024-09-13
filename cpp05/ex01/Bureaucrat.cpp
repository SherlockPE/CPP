#include "Bureaucrat.hpp"
#include "Form.hpp"

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

void		Bureaucrat::signForm(Form &form)
{
	if (m_grade <= form.get_grade_to_sign())
		std::cout	<< LIGHT_CYAN << m_name << "signed" << form.get_form_name()
					<< NC << std::endl;
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &src)
{
	os << BLUE << src.getName() << 
	CYAN << ", bureaucrat grade: " << src.getGrade() << NC << std::endl;
	return (os);
}
