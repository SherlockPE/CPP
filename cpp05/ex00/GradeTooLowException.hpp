/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:18:42 by flopez-r          #+#    #+#             */
/*   Updated: 2024/09/11 14:49:18 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef _GRADE_TO_LOW_EXCEPTION
# define _GRADE_TO_LOW_EXCEPTION


class GradeTooLowException : public std::exception
{
	private:
		/* data */
	public:
		// GradeTooLowException(void);
		virtual const char * what() const throw()
		{
			return (MAGENTA"The grade is to low"NC);
		}
};

#endif // !_GRADE_TO_LOW_EXCEPTION