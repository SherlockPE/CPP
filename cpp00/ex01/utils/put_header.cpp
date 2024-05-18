/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_header.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:52:52 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/18 19:31:02 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	put_header(std::string color)
{
	std::cout << color;
	put_separator();
	Contact::put_field("Index");
	Contact::put_field("First name");
	Contact::put_field("Last name");
	Contact::put_field("Nick name");
	std::cout << RESET;
	std::cout << std::endl;
}
