/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeToHighException.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:17:51 by flopez-r          #+#    #+#             */
/*   Updated: 2024/09/11 16:43:00 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#ifndef _GRADE_TO_HIGH_EXCEPTION_HPP
# define _GRADE_TO_HIGH_EXCEPTION_HPP
# include <iostream>
# include <exception>


class GradeToHighException : public std::exception
{
	public:
		// GradeTooLowException(void);
		virtual const char * what() const throw()
		{
			return (MAGENTA"The grade is to high"NC);
		}
};

#endif // !_GRADE_TO_HIGH_EXCEPTION_HPP