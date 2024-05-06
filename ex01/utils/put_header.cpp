/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_header.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:52:52 by flopez-r          #+#    #+#             */
/*   Updated: 2024/05/06 15:53:04 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ex01.hpp>

void	put_header(std::string color)
{
	std::cout << color;
	put_separator();
	put_field("Index");
	put_field("First name");
	put_field("Last name");
	put_field("Nick name");
	std::cout << RESET;
	std::cout << std::endl;
}
