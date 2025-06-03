/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:35:20 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/06 16:19:45 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//_________________________________  Constructor  ______________________________

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = other;
}

//_________________________________  Destructor  _______________________________

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

//__________________________________  Operator  ________________________________

Cat	&Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

//______________________________  Member Functions  ____________________________
