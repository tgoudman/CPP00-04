/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 22:36:26 by nezumickey        #+#    #+#             */
/*   Updated: 2025/04/11 16:54:54 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack(void)
{
	std::cout << _name << " attacks with " << _weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &type) : _weapon(type)
{
	_name = name;
	std::cout << "Copie constructor HumanA called" << std::endl;
}
HumanA::~HumanA()
{
	std::cout << "Destructor HumanA called" << std::endl;
}
