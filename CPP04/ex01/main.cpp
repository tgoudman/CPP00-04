/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:37:23 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/06 19:50:09 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


void	delTabAnimal(Animal **tab, int size)
{
	for(int i = 0; i < size; i++)
		delete tab[i];
}
void	createTabAnimal(void)
{
	Animal *tab[10];

	for (int i = 0; i < 5; i++)
		tab[i] = new Cat();
	for (int i = 5; i < 10; i++)
		tab[i] = new Dog();
	for (int i = 0; i < 10; i++)
		tab[i]->makeSound();
	delTabAnimal(tab, 10);
}

int main()
{
	createTabAnimal();

	return 0;
}
