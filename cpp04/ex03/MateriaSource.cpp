#include "MateriaSource.hpp"

/*					Constructors					*/
MateriaSource::MateriaSource(void) : pos(0)
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
	(void)other;
	return (*this);
}

/*					Destructor					*/
MateriaSource::~MateriaSource(void) {
	std::cout << RED "MateriaSource destructor called" NC << std::endl;
	for (int i = 0; i < pos; i++)
		delete m_known_materias[i];
}

/*					Metods					*/
void	MateriaSource::learnMateria(AMateria* materia_random)
{
	if (pos >= 3)
	{
		std::cout << RED << "Class MateriaSource only have space for 4 materias\n" << NC;
		return ;
	}
	m_known_materias[pos] = materia_random;
	pos++;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int i = 0;
	while (i < pos)
	{
		if (m_known_materias[i]->getType() == type)
			return (m_known_materias[i]->clone());
		i++;
	}
	std::cout	<< RED << "Failure trying to create a new materia: <" << NC
				<< YELLOW << type << "> " << NC 
				<< "Not found in the learned materias" << std::endl;
	return (NULL);
}
