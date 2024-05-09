# include <iomanip>
# include <iostream>
# define MAX_CONTACTS 8

// Colors
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define CYAN "\033[0;36m"
# define WHITE "\033[1;97m"
# define RESET "\033[0m"
# define ORANGE "\033[38;5;208m"

class	contact
{
	public:
		int	id;
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
	void set_values (int id, std::string name, std::string lname, std::string nickname, std::string number, std::string d_secret);
	void print_values (void);
};

void contact::set_values (int id, std::string name, std::string lname, std::string nickname, std::string number, std::string d_secret)
{
	this->id = id;
	first_name = name;
	last_name = lname;
	nick_name = nickname;
	phone_number = number;
	darkest_secret = d_secret;
}

void	contact::print_values(void)
{
	std::cout << YELLOW <<  id << RESET << std::endl;
	std::cout << first_name << std::endl;
	std::cout << last_name << std::endl;
	std::cout << nick_name << std::endl;
	std::cout << phone_number << std::endl;
	std::cout << darkest_secret << std::endl;
}

class PhoneBook
{
	public:
		contact contacts[MAX_CONTACTS];
};

int main(void)
{
	PhoneBook phone;

	int	i;

	i = 0;
	while (i < MAX_CONTACTS)
	{
		phone.contacts[i].set_values(i + 1, "Maria", "Lozano", "aaia aia", "98765", "aiaiaiaa that this filling in my soul");
		i++;
	}
	i = 0;
	while (i < MAX_CONTACTS)
	{
		phone.contacts[i].print_values();
		i++;
	}
	return 0;
}
