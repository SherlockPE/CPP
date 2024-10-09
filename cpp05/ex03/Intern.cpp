#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// CONSTRUCTORS AND DESTRUCTORS-------------------------------------------------
Intern::Intern(void) {
	std::cout << GREEN "Intern default constructor called" NC << std::endl;
}

Intern::Intern(Intern const &other) {
	std::cout << GREEN "Intern copy constructor called" NC << std::endl;
	*this = other;
}

Intern::~Intern(void) {
	std::cout << RED "Intern destructor called" NC << std::endl;
}

// OPERATORS--------------------------------------------------------------------
Intern &Intern::operator=(Intern const &other) {
	if (this == &other){
		return (*this);
	}
	// DO THINGS
	return (*this);
}

// EXCEPTIONS-------------------------------------------------------------------

const char *Intern::UnknownFormException::what() const throw()
{
	return ("Intern: Form doesnt exist\n");
}

// METHODS AND MEMBER FUNCTIONS-------------------------------------------------

static void	to_lower(std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);
}

static AForm *makePresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

static AForm *makeRobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm *makeShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm   *Intern::makeForm(std::string form_name, std::string target)
{
	std::string	form_types[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm		*(* all_forms [3])(std::string) = {&makePresidentialPardonForm, &makeRobotomyRequestForm, &makeShrubberyCreationForm};

	to_lower(form_name);
	for (size_t i = 0; i < 3; i++)
	{
		if (form_name == form_types[i])
			return ((*all_forms[i])(target));
	}
	throw UnknownFormException();
}