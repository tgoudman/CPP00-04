/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 10:27:19 by tgoudman          #+#    #+#             */
/*   Updated: 2025/05/05 12:37:00 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//_________________________________  Constructor  ______________________________

ClapTrap::ClapTrap()
{
	_name = "Unknow";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap &copie) :
	_name(copie._name),
	_energyPoints(copie._energyPoints),
	_hitPoints(copie._hitPoints),
	_attackDamage(copie._attackDamage)
{
	std::cout << "Copy Constructor called" << std::endl;
}

//__________________________________  Operator  ________________________________

ClapTrap	&ClapTrap::operator=(const ClapTrap &src)
{
	if (this != &src)
	{
		_name = src._name;
		_energyPoints = src._energyPoints;
		_hitPoints = src._hitPoints;
		_attackDamage = src._attackDamage;
	}
	return (*this);
}

//______________________________  Member Functions  ____________________________

void		ClapTrap::attack(const std::string& target)
{
	if (_energyPoints && _hitPoints)
	{
		_energyPoints--;
		std::cout << BLUE << _name << RESET << " attack " 
		<< RED << target << RESET << std::endl;
	}
	else if (!_energyPoints)
		std::cout << BLUE << _name << RESET 
		<< " doesn't have enough energy." << std::endl;
	else
		std::cout << BLUE << _name << RESET << " is dead." << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > amount)
	{
		_hitPoints -= amount;
		std::cout << BLUE << _name << RESET << " has taken "  
		<< amount << " damage! " << std::endl;
	}
	else if (_hitPoints <= amount)
	{
		_hitPoints = 0;
		std::cout << BLUE << _name << RESET << " has taken "  
		<< amount << " damage! " << std::endl;
		std::cout << BLUE << _name << RESET << " is dead." << std::endl;
	}
	else
		std::cout << BLUE << _name << RESET << " is dead." << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints && _hitPoints)
	{
		_hitPoints += amount; 
		_energyPoints--;
		std::cout << BLUE << _name << RESET << " repaired itself and gained " 
		<< amount << " of hit points, he now has " << _hitPoints 
		<< " hit points." << std::endl;
	}
	else if (!_energyPoints)
	{
		std::cout << BLUE << _name << RESET 
		<< " doesn't have enough energy." << std::endl;
	}
	else
		std::cout << BLUE << _name << RESET << " is dead." << std::endl;
}

//_________________________________  Destructor  _______________________________

ClapTrap::~ClapTrap()
{
}

