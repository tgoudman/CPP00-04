/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:32:08 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/06 16:12:04 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	private:

	public:
		// Constructeur
		Dog();
		Dog(const Dog &other);
		// Overloading Operateur
		Dog &operator=(const Dog &other);
		// Destructor
		~Dog();
		// Member Functions

};

#endif