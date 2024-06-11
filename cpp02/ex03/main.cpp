/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 21:17:20 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/06/11 16:53:17 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main( void ) {

	Point	a;
	Point	b(10.23f, 23.3f);
	Point	c = b;

	a.display_cords();
	b.display_cords();
	c.display_cords();

	Point d = c;

	d.display_cords();

	return 0; 
}
