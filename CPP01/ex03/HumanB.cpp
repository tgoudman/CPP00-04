/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 22:35:50 by nezumickey        #+#    #+#             */
/*   Updated: 2025/04/11 17:41:19 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL)
{
	_name = name;
}
void HumanB::setWeapon(Weapon &type)
{
	_weapon = &type;
}

void HumanB::attack(void)
{
	if(_weapon)
		std::cout << _name << " attacks with " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks with " << "" << std::endl;
}
HumanB::~HumanB()
{
	std::cout << "Destructor HumanB called" << std::endl;
}