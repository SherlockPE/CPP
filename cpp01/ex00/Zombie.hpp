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
		void 	announce( void );

		//Setter
		void	set_name(std::string name);

		//Destructor
		~Zombie( void );
};

Zombie* newZombie( std::string name );
void	randomChump(std::string name );

#endif