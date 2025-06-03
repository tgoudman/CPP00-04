/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 22:21:01 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/01 16:45:34 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	// std::cout << "Operator \"<<\" called" << std::endl;
	o << rhs.toFloat();
	return (o);
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_nb = 0;
}

Fixed::Fixed(const float input)
{
	// float exemple;

	// exemple = input;
	// std::cout << "Fixed Float constructor called" << std::endl;
	// std::cout << "------------------------------" << std::endl;
	// std::cout << "Value = " << input << std::endl;
	// std::cout << "1 << 8 = 256" << std::endl;
	// exemple = exemple * (1 << _bits);
	// std::cout << exemple << " * 256 = " << exemple <<  std::endl;
	// std::cout << "arrondie le plus proche = "  << roundf(exemple) << std::endl;
	// std::cout << "------------------------------" << std::endl;
	std::cout << "Float constructor called" << std::endl;
	this->_nb = roundf(input * (1 << this->_bits));
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	_nb = nb << (_bits);
}


Fixed::Fixed(Fixed const &copie)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copie;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


Fixed	&Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_nb = src.getRawBits();
	return (*this);
}

int		Fixed::getRawBits( void ) const
{
	return(this->_nb);
}

float Fixed::toFloat( void ) const
{
	return((float)_nb / (float)(1 << _bits));
}

int Fixed::toInt( void ) const
{
	return(_nb / (1 << _bits));
}
