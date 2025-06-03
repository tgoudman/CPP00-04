/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:31:48 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/06 16:27:54 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//_________________________________  Constructor  ______________________________

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	*this = other;
}

//_________________________________  Destructor  _______________________________

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

//__________________________________  Operator  ________________________________

Dog	&Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

//______________________________  Member Functions  ____________________________
