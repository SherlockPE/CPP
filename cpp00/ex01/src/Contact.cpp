/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 18:05:38 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/18 19:12:52 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>


//Metods

void	Contact::put_field(std::string content)
{
	int	c_len;
	int	i;

	c_len = content.length();
	if (c_len > WSIZE)
	{
		content[WSIZE - 1] = '.';
		content[WSIZE] = 0;
	}
	i = 0;
	std::cout << std::setw(WSIZE - c_len + 1);
	while (i < WSIZE && content[i])
	{
		std::cout << content[i];
		i++;
	}
	put_separator();
}


void Contact::set_values (std::string name, std::string lname, std::string nickname, std::string number, std::string d_secret)
{
	first_name = name;
	last_name = lname;
	nick_name = nickname;
	phone_number = number;
	darkest_secret = d_secret;
}

void	Contact::print_contact_info(void)
{
	print_col("\nFirst name: ", CYAN);
    print_col(first_name, YELLOW);
    print_col("\nLast name: ", CYAN);
    print_col(last_name, YELLOW);
    print_col("\nNick name: ", CYAN);
    print_col(nick_name, YELLOW);
    print_col("\nphone number: ", CYAN);
    print_col(phone_number, YELLOW);
    print_col("\ndarkest_secret: ", CYAN);
    print_col(darkest_secret, YELLOW);
}

void    Contact::put_row(void)
{
    put_field(first_name);
    put_field(last_name);
    put_field(nick_name);
}
// Contact::Contact(void)
// {
// 	pointers[0] = &first_name;
// 	pointers[1] = &last_name;
// 	pointers[2] = &nick_name;
// 	pointers[3] = &phone_number;
// 	pointers[4] = &darkest_secret;
// }
