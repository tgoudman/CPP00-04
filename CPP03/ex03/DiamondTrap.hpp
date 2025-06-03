/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:22:35 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/05 12:57:08 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_NAME_HPP
# define CLASS_NAME_HPP

// Includes
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	name;
	public:
		// Constructeur
		DiamondTrap();
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap(std::string name);
		// Overloading Operateur
		DiamondTrap &operator=(const DiamondTrap &other);
		// Destructor
		virtual ~DiamondTrap();
		// Member Functions
		void	whoAmI();
	
};

#endif