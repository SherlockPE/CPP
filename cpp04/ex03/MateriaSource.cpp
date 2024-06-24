#include "MateriaSource.hpp"

/*					Constructors					*/
MateriaSource::MateriaSource(void)
{
	std::cout << GREEN "MateriaSource default constructor called" NC << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	std::cout << GREEN "MateriaSource copy constructor called" NC << std::endl;
	*this = other;
}

/*					Operators					*/
MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	if (this == &other){
		return (*this);
	}
	// DO THINGS
	return (*this);
}

/*					Destructor					*/
MateriaSource::~MateriaSource(void) {
	std::cout << RED "MateriaSource destructor called" NC << std::endl;
}

/*					Metods					*/
void	MateriaSource::learnMateria(AMateria* materia_random)
{
	int	i = 0;
	while (i < 4)
	{
		if (!m_known_materias[i])
		{
			m_known_materias[i] = materia_random;
			break ;
		}
		i++;
	}
	if (i == 4)
		std::cout << RED << "Class MateriaSource only have space for 4 materias\n" << NC;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int i = 0;
	while (i < 4)
	{
		if (m_known_materias[i] && (m_known_materias[i]->getType() == type))
			return (m_known_materias[i]->clone());
		i++;
	}
	std::cout	<< RED << "Failure trying to create a new materia: <" << NC
				<< YELLOW << type << "> " << NC 
				<< "Not found in the learned materias" << std::endl;
	return (NULL);
}
