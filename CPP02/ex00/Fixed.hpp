/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 06:56:27 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/01 16:52:39 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int _nb;
		static const int _nbFixe = 8;
	public:
		Fixed();
		Fixed(Fixed const &copie);
		Fixed &operator=(Fixed const& nb1);
		~Fixed();

		int	getRawBits( void ) const;
		void setRawBits( int const raw );
};


#endif