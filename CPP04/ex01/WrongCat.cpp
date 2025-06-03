/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:48:53 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/07 00:46:14 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//_________________________________  Constructor  ______________________________
WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "Copy WrongCat constructor called" << std::endl;
	*this = other;
}

//_________________________________  Destructor  _______________________________

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

//__________________________________  Operator  ________________________________

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

//______________________________  Member Functions  ____________________________
