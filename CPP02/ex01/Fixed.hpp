/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 22:19:05 by nezumickey        #+#    #+#             */
/*   Updated: 2025/04/29 17:50:57 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_nb;
		static const int	_bits = 8;
	public:
		// Constructor
		Fixed();
		Fixed(Fixed const &copie);
		Fixed(const float nb);
		Fixed(const int nb);

		// Member fonction
		float	toFloat( void ) const;
		int 	toInt( void ) const;
		int		getRawBits( void ) const;

		//Operator
		Fixed	&operator=(const Fixed &src);

		//Destructor
		~Fixed();
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif