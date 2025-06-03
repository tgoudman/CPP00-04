/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:26:51 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/06 22:44:57 by nezumickey       ###   ########.fr       */
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
		int			_index;
	public:
		// Constructeur
		Brain();
		Brain(const Brain &other);
		// Overloading Operateur
		Brain &operator=(const Brain &other);
		// Destructor
		~Brain();
		// Member Functions
		std::string	getIdea(int index) const;
		void		setIdea(std::string idea);
		int			getIndex() const;
	
};

#endif