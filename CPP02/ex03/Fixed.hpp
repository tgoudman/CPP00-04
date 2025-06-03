/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:57:49 by tgoudman          #+#    #+#             */
/*   Updated: 2025/04/30 17:52:41 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	_nb;
		static const int _bits = 8;
	public:
	//constructor
		Fixed();
		Fixed(const int input);
		Fixed(const float input);
		Fixed(Fixed const &copie);
	//operator
		Fixed	&operator=(Fixed const &rhs);
		float	operator+(Fixed const &rhs) const;
		float	operator*(Fixed rhs) const;
		float	operator-(Fixed const &rhs) const;
		float	operator/(Fixed const &rhs) const;

		bool	operator>(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;

		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);

	//Member function
		float	toFloat( void ) const;
		int		toInt( void ) const;
		static Fixed	&min( Fixed &first, Fixed &second);
		static const Fixed	&min(const Fixed &first, const Fixed &second);
		static Fixed	&max( Fixed &first, Fixed &second);
		static const Fixed	&max(const Fixed &first, const Fixed &second);

	//Getter
		int		getRawBits( void ) const;

	//Destructor
		~Fixed();
};
std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif