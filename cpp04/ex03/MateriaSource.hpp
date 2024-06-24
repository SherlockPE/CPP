#ifndef _COLORS
# define _COLORS
# define BLACK "\033[1;30m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define MAGENTA "\033[1;35m"
# define CYAN "\033[1;36m"
# define WHITE "\033[1;37m"
# define NC "\033[0m"

#endif // !_COLORS

// MateriaSource declaration --------------------------------------------------------
#pragma once
#ifndef _MATERIASOURCE_HPP
# define _MATERIASOURCE_HPP
# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*m_known_materias[4];
		int			pos;
	public:
		/*					Constructors					*/
		MateriaSource(void);
		MateriaSource(MateriaSource const &other);

		/*					Operators					*/
		MateriaSource	&operator=(MateriaSource const &other);

		/*					Metods					*/
		void			learnMateria(AMateria* materia_random);
		AMateria*		createMateria(std::string const & type);

		/*					Destructor					*/
		~MateriaSource(void);
};

#endif // !_MATERIASOURCE_HPP
