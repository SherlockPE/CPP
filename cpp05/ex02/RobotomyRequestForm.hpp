/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:25:28 by flopez-r          #+#    #+#             */
/*   Updated: 2024/09/17 16:57:30 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// RobotomyRequestForm declaration --------------------------------------------------------
#pragma once
#ifndef _ROBOTOMYREQUESTFORM_HPP
# define _ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include "AForm.hpp"
# include <cstdlib>

class RobotomyRequestForm : public AForm
{
	public:
		/*					Constructors					*/
		RobotomyRequestForm(std::string name, int sign_grade, int exec_grade);
		RobotomyRequestForm(RobotomyRequestForm const &other);

		/*					Operators					*/
		RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

		/*					Metods					*/
		void	execute(Bureaucrat const &executor) const;

		/*					Destructor					*/
		~RobotomyRequestForm(void);
};

#endif // !_ROBOTOMYREQUESTFORM_HPP