/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:49:47 by tgoudman          #+#    #+#             */
/*   Updated: 2025/04/09 13:46:19 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	_name = "Foo";
}

Zombie::Zombie(std::string name)
{
	_name = name;
}

void	Zombie::setName(std::string name)
{
	_name = name;
}

void	Zombie::Annonce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	int		i;
	Zombie *horde;

	horde = new Zombie[N];
	for (i = 0; i < N; ++i)
		horde[i].setName(name);
	return (horde);
}

Zombie::~Zombie()
{
	std::cout << this->_name << " was destroyed" << std::endl;
}