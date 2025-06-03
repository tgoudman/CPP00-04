/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:32:08 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/06 21:52:30 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain* _brain;
	public:
		// Constructeur
		Dog();
		Dog(const Dog &other);
		// Overloading Operateur
		Dog &operator=(const Dog &other);
		// Destructor
		~Dog();
		// Member Functions
		void	virtual makeSound(void) const;
		Brain*	getBrain() const;
};

#endif