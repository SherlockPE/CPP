/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:34:48 by flopez-r          #+#    #+#             */
/*   Updated: 2024/06/02 13:57:40 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

// Replacer::Replacer(std::string old_str, std::string new_str) : _old_str(old_str), _new_str(new_str)
// {
// }

Replacer::Replacer(std::string old_str, std::string new_str)
{
	_old_str = old_str;
	_new_str = new_str;
}

void	Replacer::replace_and_save(std::string origin, std::ofstream &object_file)
{
	size_t num_founded;

	(void)object_file;
	num_founded = 0;
	if (!_old_str.empty())
	{
		while (1)
		{
			num_founded = origin.find(_old_str, num_founded);
			if (num_founded == std::string::npos)
				break;
			origin.erase(num_founded, _old_str.length());
			origin.insert(num_founded, _new_str);
			num_founded += _new_str.length();
		}
	}
	object_file << origin;
}

Replacer::~Replacer()
{
}
