/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:12:34 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/05 13:36:06 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//_________________________________  Constructor  ______________________________

DiamondTrap::DiamondTrap() : ClapTrap("defaultDiamond_clap_trap"), ScavTrap(), FragTrap()
{
	name = "defaultDiamond";
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap"), ScavTrap(name), FragTrap(name)
{
	this->name = name;
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "Custom DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other), name(other.name)
{
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
}

//_________________________________  Destructor  _______________________________

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

//__________________________________  Operator  ________________________________

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		this->name = other.name;
	}
	return *this;
}

//______________________________  Member Functions  ____________________________

void DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap named \"" << DIAMOND << this->name << RESET << "\""
              << " and my ClapTrap name is \"" << ClapTrap::name << "\"" << std::endl;
}