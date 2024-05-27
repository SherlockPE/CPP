/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 21:19:13 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/27 15:43:23 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
# define REPLACER_HPP

# include <iostream>
# include <fstream>

class Replacer
{
	private:
		std::string _old_str;
		std::string _new_str;
		std::string	_archive_name;
	public:
		void	replace_and_save(std::string origin, std::ofstream &object_file);
		Replacer(std::string old_str, std::string new_str);
		~Replacer();
};

#endif