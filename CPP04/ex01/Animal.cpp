/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:26:14 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/06 20:08:09 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//_________________________________  Constructor  ______________________________

Animal::Animal()
{
	std::cout << "Default Animal constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Copy Animal constructor called" << std::endl;
	*this = other;
}

//_________________________________  Destructor  _______________________________

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

//__________________________________  Operator  ________________________________

Animal	&Animal::operator=(const Animal &other)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return *this;
}

//______________________________  Member Functions  ____________________________

void	Animal::makeSound(void) const
{
	if (this->type == "Cat")
		std::cout << "Meeeeeeoooooowww ! 🐱" << std::endl;
	else if (this->type == "Dog")
		std::cout << "Ouuuuuuuuuuuuuaaaaaf!!! 🐕" << std::endl;
	else
		std::cout << "* Unrecognized animal sound *" << std::endl;
}

//__________________________________  Getters  _________________________________

std::string	Animal::getType() const
{
	return (type);	
}
