/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 11:37:00 by tgoudman          #+#    #+#             */
/*   Updated: 2025/05/05 13:35:50 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap Claptrap;
	ScavTrap ScavTrap("ScavTrap");

	ScavTrap.takeDamage(50);
	ScavTrap.guardGate();
	ScavTrap.beRepaired(5);
	ScavTrap.attack("Target");
	return 0;
}
