/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:49:02 by tgoudman          #+#    #+#             */
/*   Updated: 2025/04/09 13:49:10 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int	N;
	int	i;

	N = 5;
	Zombie zombieClass;
	Zombie *zombiehorde;
	zombiehorde = zombieClass.zombieHorde(N, "Mickael");
	for(i = 0; i < N; ++i)
		zombiehorde[i].Annonce();
	delete[] zombiehorde;
	return 0;
}
