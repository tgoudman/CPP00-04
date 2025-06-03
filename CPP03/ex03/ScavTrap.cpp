/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 12:10:14 by tgoudman          #+#    #+#             */
/*   Updated: 2025/05/05 12:27:53 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//_________________________________  Constructor  ______________________________

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->_guardingGate = false;
	std::cout << "Default constructor ScavTrap called" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	_guardingGate = copy._guardingGate;
	std::cout << "Copy constructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->_guardingGate = false;
	std::cout << "Custom Constructor ScavTrap name called" << std::endl;
}

//__________________________________  Operator  ________________________________

ScavTrap	&ScavTrap::operator=(const ScavTrap &src)
{
	hitPoints = src.hitPoints;
	energyPoints = src.energyPoints;
	attackDamage = src.attackDamage;
	name = src.name;
	return *this;
}

//______________________________  Member Functions  ____________________________

void		ScavTrap::attack(const std::string& target)
{
	if (energyPoints && hitPoints)
	{
		energyPoints--;
		std::cout << BLUE << name << RESET << " uses its signature move on " 
		<< RED << target << RESET << std::endl;
	}
	else if (!energyPoints)
		std::cout << BLUE << name << RESET << " doesn't have enough energy." 
		<< std::endl;
	else
		std::cout << BLUE << name << RESET << " is already dead." << std::endl;
}

void 			ScavTrap::guardGate()
{
	_guardingGate = true;
	std::cout << "Special ability " << YELLOW << " Guarding gate " 
	<< RESET << "ativate" << std::endl;
}
//_________________________________  Destructor  _______________________________

ScavTrap::~ScavTrap()
{
	std::cout << "Default destructor ScavTrap called" << std::endl;
}