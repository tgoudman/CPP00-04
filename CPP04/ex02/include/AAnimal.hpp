/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:26:21 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/06 21:04:01 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "color.hpp"

class Brain;

class AAnimal
{
	protected:
		std::string type;
	public:
		// Constructeur
		AAnimal();
		AAnimal(const AAnimal &other);
		// Overloading Operateur
		AAnimal &operator=(const AAnimal &other);
		// Destructor
		virtual ~AAnimal();
		// Getters
		std::string	getType() const;
		// Member Functions
		virtual	void	makeSound(void) const = 0;
		virtual Brain*	getBrain() const = 0;
};

void	setCatIdea(Brain *brain, int index);
void	setDogIdea(Brain *brain, int index);

#endif