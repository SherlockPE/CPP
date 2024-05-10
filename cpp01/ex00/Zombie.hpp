#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <new>  
# include <string>

class Zombie
{
	private:
		std::string	name;
	public:
		//Metods
		Zombie* newZombie( std::string name );
		void 	announce( void );
		void	randomChump( std::string name );

		//Setter
		void	set_name(std::string name);
};

#endif