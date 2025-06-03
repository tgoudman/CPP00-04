/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:26:51 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/07 00:44:50 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# define NBIDEAS 100

class Brain
{
	private:
		std::string	_ideas[NBIDEAS];
	public:
		// Constructeur
		Brain();
		Brain(const Brain &other);
		// Overloading Operateur
		Brain &operator=(const Brain &other);
		// Destructor
		~Brain();
		// Member Functions

	
};

#endif