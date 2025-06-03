/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:49:39 by tgoudman          #+#    #+#             */
/*   Updated: 2025/04/11 17:24:31 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Constructor Weapon called" << std::endl;
}
Weapon::Weapon(std::string type)
{
	_type = type;
}

const std::string&	Weapon::getType()
{
	return(_type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{
	std::cout << "Destructor Weapon called" << std::endl;
}