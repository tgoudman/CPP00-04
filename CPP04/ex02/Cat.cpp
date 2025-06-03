/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:35:20 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/06 22:31:34 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "AAnimal.hpp"

//_________________________________  Constructor  ______________________________

Cat::Cat() : AAnimal()
{
	this->type = "Cat";
	_brain = new Brain();
	std::cout  << CYAN << "Default Cat constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal(other)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	_brain = new Brain(*other._brain);
}

//_________________________________  Destructor  _______________________________

Cat::~Cat()
{
	delete _brain;
	std::cout << CYAN << "Cat destructor called" << RESET << std::endl;
}

//__________________________________  Operator  ________________________________

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
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

void	Cat::makeSound(void) const
{
	std::cout << "Meeeeeeoooooowww ! 🐱" << std::endl;
}

Brain*	Cat::getBrain() const
{
	return _brain;
}
