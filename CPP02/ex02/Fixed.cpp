/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:57:29 by tgoudman          #+#    #+#             */
/*   Updated: 2025/05/01 18:01:49 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//* **************************  Constructor  ******************************* *//

Fixed::Fixed() : _nb(0)
{

}
Fixed::Fixed(const int input)
{
	this->_nb = input << this->_bits;
}
Fixed::Fixed(const float input)
{
	_nb = roundf(input * (1 << _bits));
}

Fixed::Fixed(const Fixed &copie)
{
	*this = copie;
}

//* ****************************  Operator  ******************************** *//

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}

Fixed	&Fixed::operator=(const Fixed &src)
{
	if (this != &src)
		this->_nb = src.getRawBits();
	return (*this);
}

float	Fixed::operator+(Fixed const &rhs) const
{
	return(this->toFloat() + rhs.toFloat());
}

float	Fixed::operator*(Fixed	rhs) const
{
	return(this->toFloat() * rhs.toFloat());
}

float	Fixed::operator-(Fixed const &rhs) const
{
	return(this->toFloat() - rhs.toFloat());
}

float	Fixed::operator/(Fixed const &rhs) const
{
	return(this->toFloat() / rhs.toFloat());
}

Fixed&	Fixed::operator++()
{
	this->_nb++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	copie;
	copie = *this;
	this->_nb++;
	return (copie);
}

Fixed&	Fixed::operator--()
{
	this->_nb--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	copie;
	copie = *this;
	this->_nb--;
	return (copie);
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	std::cout << "Operator \">\" called" << std::endl;
	if (this->_nb > rhs._nb)
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	std::cout << "Operator \">=\" called" << std::endl;
	if (this->_nb >= rhs._nb)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	std::cout << "Operator \"<\" called" << std::endl;
	if (this->_nb < rhs._nb)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	if (this->_nb <= rhs._nb)
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	std::cout << "Operator \"==\" called" << std::endl;
	if (this->_nb == rhs._nb)
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	std::cout << "Operator \"!=\" called" << std::endl;
	if (this->_nb != rhs._nb)
		return (true);
	else
		return (false);
}
//* ************************  Member Function  ***************************** *//

float	Fixed::toFloat(void) const
{
	return ((float)_nb / (float)(1 << _bits));
}

int		Fixed::getRawBits( void ) const
{
	return (this->_nb);
}

Fixed& Fixed::min( Fixed &first, Fixed &second)
{
	if (first._nb < second._nb)
		return (first);
	else
		return (second);
}

int		Fixed::toInt( void ) const
{
	return(this->_nb / (1 << _bits));
}

const Fixed& Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first._nb < second._nb)
		return (first);
	else
		return (second);
}

Fixed& Fixed::max( Fixed &first, Fixed &second)
{
	if (first._nb >= second._nb)
		return (first);
	else
		return (second);
}

const Fixed& Fixed::max( const Fixed &first, const Fixed &second)
{
	if (first._nb >= second._nb)
		return (first);
	else
		return (second);
}

//* **************************  Destructor  ******************************** *//

Fixed::~Fixed()
{
}