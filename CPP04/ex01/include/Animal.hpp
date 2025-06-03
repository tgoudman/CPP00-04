/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:26:21 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/06 19:21:49 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "color.hpp"

class Animal
{
	protected:
		std::string type;
	public:
		// Constructeur
		Animal();
		Animal(const Animal &other);
		// Overloading Operateur
		Animal &operator=(const Animal &other);
		// Destructor
		virtual ~Animal();
		// Getters
		std::string	getType() const;
		// Member Functions
		virtual	void	makeSound(void) const;
};

#endif