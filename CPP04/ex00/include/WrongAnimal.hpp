/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:40:37 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/07 00:36:16 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		// Constructeur
		WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		// Overloading Operateur
		WrongAnimal &operator=(const WrongAnimal &other);
		// Destructor
		virtual ~WrongAnimal();
		// Member Functions
		void	makeSound(void) const;

	
};

#endif