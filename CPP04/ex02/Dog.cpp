/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:31:48 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/06 21:47:58 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//_________________________________  Constructor  ______________________________

Dog::Dog() : AAnimal()
{
	this->type = "Dog";
	_brain = new Brain();
	std::cout << RED <<  "Default Dog constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	_brain = new Brain(*other._brain);
}

//_________________________________  Destructor  _______________________________

Dog::~Dog()
{
	delete _brain;
	std::cout << RED << "Dog destructor called" << RESET << std::endl;
}

//__________________________________  Operator  ________________________________

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

//______________________________  Member Functions  ____________________________

void	Dog::makeSound(void) const
{
		std::cout << "Ouuuuuuuuuuuuuaaaaaf!!! 🐕" << std::endl;
}

Brain* Dog::getBrain() const
{
	return _brain;
}
