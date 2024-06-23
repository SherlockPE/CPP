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

// Cure declaration --------------------------------------------------------
#pragma once
#ifndef _CURE_HPP
# define _CURE_HPP
# include <iostream>
# include "AMateria.hpp"


class Cure : public Amateria
{
	public:
		/*					Constructors					*/
		Cure(void);
		Cure(Cure const &other);

		/*					Operators					*/
		Cure &operator=(Cure const &other);

		/*					Metods					*/
		Cure*	clone() const;
		void	use(ICharacter& target);

		/*					Destructor					*/
		~Cure(void);
};

#endif // !_CURE_HPP
