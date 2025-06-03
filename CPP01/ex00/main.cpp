/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 18:54:09 by nezumickey        #+#    #+#             */
/*   Updated: 2025/04/18 18:51:31 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombie;
	Zombie zombieStack;

	zombieStack.randomChump("Milou");
	zombie = NULL;
	zombie = zombie->newZombie("Tintin");
	zombie->announce();
	delete zombie;
	return 0;
}
