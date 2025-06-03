/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:56:01 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/05 12:45:37 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//_________________________________  Constructor  ______________________________

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->attackDamage = 30;
	this->energyPoints = 100;
	this->hitPoints = 100;
	this->name = "Unknow";
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Custom FragTrap constructor called" << std::endl;
	this->attackDamage = 30;
	this->energyPoints = 100;
	this->hitPoints = 100;
	this->name = name;
}

//_________________________________  Destructor  _______________________________

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

//__________________________________  Operator  ________________________________

FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	this->name = src.name;
	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	this->attackDamage = src.attackDamage;
	return *this;
}
//______________________________  Member Functions  ____________________________

void FragTrap::highFivesGuys(void)
{
	std::cout << name << " requests high fives! ✋" << std::endl;
}