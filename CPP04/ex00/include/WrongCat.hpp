/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:49:25 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/07 00:31:57 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		// Constructeur
		WrongCat();
		WrongCat(const WrongCat &other);
		// Overloading Operateur
		WrongCat &operator=(const WrongCat &other);
		// Destructor
		virtual ~WrongCat();
		// Member Functions
		void	makeSound(void) const;
	
};

#endif