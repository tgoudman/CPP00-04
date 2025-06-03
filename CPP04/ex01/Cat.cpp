/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:35:20 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/07 00:47:07 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//_________________________________  Constructor  ______________________________

Cat::Cat() : Animal()
{
	this->type = "Cat";
	_brain = new Brain();
	std::cout  << CYAN << "Default Cat constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
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
