/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:33:37 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/06 17:36:01 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* _brain;
	public:
		// Constructeur
		Cat();
		Cat(const Cat &other);
		// Overloading Operateur
		Cat &operator=(const Cat &other);
		// Destructor
		virtual ~Cat();
		// Member Functions
	
};

#endif