/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:26:41 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/06 22:30:41 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "color.hpp"

//_________________________________  Constructor  ______________________________

Brain::Brain() : _index(0)
{
	std::cout << BLUE << "Default Brain constructor called" << RESET << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Copy Brain constructor called" << std::endl;
	*this = other;
}

//_________________________________  Destructor  _______________________________

Brain::~Brain()
{
	std::cout << BLUE << "Brain destructor called" << RESET << std::endl;
}

//__________________________________  Operator  ________________________________

Brain	&Brain::operator=(const Brain &other)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	_index = other._index;
	for (int i = 0; i < NBIDEAS; i++)
		this->_ideas[i] = other._ideas[i];
	return (*this);
}

//______________________________  Member Functions  ____________________________

std::string	Brain::getIdea(int index) const
{
	return(_ideas[index]);
}

int			Brain::getIndex() const
{
	return(_index);
}

void		Brain::setIdea(std::string idea)
{
	this->_ideas[_index] = idea;
	_index++;
	if (_index == NBIDEAS - 1)
		_index = 0;
}