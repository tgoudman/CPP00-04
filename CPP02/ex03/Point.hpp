/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:16:53 by tgoudman          #+#    #+#             */
/*   Updated: 2025/05/01 14:31:33 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;
	public:
	// Constructor
		Point();
		Point(const Point &copie);
		Point(const float inputX, const float inputY);
	// Operator
		Point	&operator=(Point const &src);
	// Members function
	// Getters
		float	getX( void ) const;
		float	getY( void ) const;
	// Destructor
		~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif