/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:54:33 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/05 13:29:10 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:

	public:
		// Constructeur
		FragTrap();
		FragTrap(const FragTrap &other);
		FragTrap(std::string name);
		// Operateur
		FragTrap &operator=(const FragTrap &src);
		// Destructor
		virtual ~FragTrap();
		// Member Functions
		void highFivesGuys(void);
};

#endif