/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:26:14 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/06 20:44:33 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

//_________________________________  Constructor  ______________________________

AAnimal::AAnimal()
{
	std::cout << "Default AAnimal constructor called" << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << "Copy AAnimal constructor called" << std::endl;
	*this = other;
}

//_________________________________  Destructor  _______________________________

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

//__________________________________  Operator  ________________________________

AAnimal	&AAnimal::operator=(const AAnimal &other)
{
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

//______________________________  Member Functions  ____________________________

void	AAnimal::makeSound(void) const
{}

//__________________________________  Getters  _________________________________

std::string	AAnimal::getType() const
{
	return (type);	
}
