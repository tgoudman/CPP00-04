/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 10:27:19 by tgoudman          #+#    #+#             */
/*   Updated: 2025/05/05 12:42:36 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//_________________________________  Constructor  ______________________________

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor ClapTrap called" << std::endl;
	name = "Unknow";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Custom constructor ClapTrap called" << std::endl;
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copie) :
	name(copie.name),
	energyPoints(copie.energyPoints),
	hitPoints(copie.hitPoints),
	attackDamage(copie.attackDamage)
{
	std::cout << "Copy Constructor called" << std::endl;
}

//__________________________________  Operator  ________________________________

ClapTrap	&ClapTrap::operator=(const ClapTrap &src)
{
	if (this != &src)
	{
		name = src.name;
		energyPoints = src.energyPoints;
		hitPoints = src.hitPoints;
		attackDamage = src.attackDamage;
	}
	return (*this);
}

//______________________________  Member Functions  ____________________________

void		ClapTrap::attack(const std::string& target)
{
	if (energyPoints && hitPoints)
	{
		energyPoints--;
		std::cout << BLUE << name << RESET << " attack " 
		<< RED << target << RESET << std::endl;
	}
	else if (!energyPoints)
	{
		std::cout << BLUE << name << RESET 
		<< " doesn't have enough energy." << std::endl;
	}
	else
		std::cout << BLUE << name << RESET << " is already dead." << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > amount)
	{
		hitPoints -= amount;
		std::cout << BLUE << name << RESET 
		<< " has taken "  << amount << " damage! " << std::endl;
	}
	else if (hitPoints <= amount)
	{
		hitPoints = 0;
		std::cout << BLUE << name << RESET 
		<< " has taken "  << amount << " damage! " << std::endl;
		std::cout << BLUE << name << RESET << " is dead." << std::endl;
	}
	else
		std::cout << BLUE << name << RESET << " is dead." << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints && hitPoints)
	{
		hitPoints += amount; 
		energyPoints--;
		std::cout << BLUE << name << RESET 
		<< " repaired itself and gained " << amount 
		<< " of hit points, he now has " 
		<< hitPoints << " hit points." << std::endl;
	}
	else if (!energyPoints)
	{
		std::cout << BLUE << name << RESET 
		<< " doesn't have enough energy." << std::endl;
	}
	else
		std::cout << BLUE << name << RESET << " is dead." << std::endl;
}

//_________________________________  Destructor  _______________________________

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor ClapTrap called" << std::endl;
}

