/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 23:45:10 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/06 23:46:03 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void	setDogIdea(Brain *brain, int index)
{
	switch (index)
	{
	case 4:
		brain->setIdea("Bury a bone in the backyard");
		break;
	case 3:	
		brain->setIdea("Bark at the mailman without fail");
		break;
	case 2:
		brain->setIdea("Follow my human from room to room");
		break;
	case 1:
		brain->setIdea("Play fetch until I drop");
		break;
	case 0:
		brain->setIdea("Celebrate wildly when my human comes home");
		break;
	default:
		break;
	}
}

void	setCatIdea(Brain *brain, int index)
{
	switch (index)
	{
	case 4:
		brain->setIdea("Sleep on the warm laptop keyboard");
		break;
	case 3:	
		brain->setIdea("Climb to the top of the bookshelf");
		break;
	case 2:
		brain->setIdea("Stare at nothing to confuse humans");
		break;
	case 1:
		brain->setIdea("Knock over a glass for fun");
		break;
	case 0:
		brain->setIdea("Chase the mysterious red dot");
		break;
	default:
		break;
	}
}