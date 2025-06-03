/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:09:04 by tgoudman          #+#    #+#             */
/*   Updated: 2025/05/01 17:47:42 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//Constructor

Point::Point() : _x(0), _y(0)
{
	// std::cout << "Default constructor called" << "\n" << _x.getRawBits()
	// << "\n" << _y.getRawBits() << std::endl;
}
Point::Point(const Point &copie) : _x(copie._x), _y(copie._y)
{
	// std::cout << "Recopy constructor called" << "\n" << _x.getRawBits()
	// << "\n" << _y.getRawBits() << std::endl;
}
Point::Point(const float inputX, const float inputY) : _x(inputX) , _y(inputY)
{
	// std::cout << "Custom constructor Point called" << std::endl;
}

// Operator

Point&	Point::operator=(Point const &src)
{
	if (this != &src)
		new (this)Point(src._x.toFloat(), src._y.toFloat());
	return (*this);
}		

// Getters

float	Point::getX( void ) const
{
	return(this->_x.toFloat());
}

float	Point::getY( void ) const
{
	return(this->_y.toFloat());
}

// Destructor

Point::~Point()
{
}