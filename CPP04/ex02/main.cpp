/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:37:23 by nezumickey        #+#    #+#             */
/*   Updated: 2025/05/06 23:53:39 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void	printIdea(AAnimal* animal)
{
	Brain *brain = animal->getBrain();
	for (int i = 0; i < NBIDEAS; i++)
	{
		if (!brain->getIdea(i).empty())
			std::cout << YELLOW << brain->getIdea(i) << RESET << std::endl;
	}
}

void	delTabAnimal(AAnimal **tab, int size)
{
	for(int i = 0; i < size; i++)
		delete tab[i];
}
void	createTabAnimal(void)
{
	AAnimal *tab[10];

	for (int i = 0; i < 5; i++)
	{
		tab[i] = new Cat();
		setCatIdea(tab[i]->getBrain(), i);
	}
	for (int i = 5; i < 10; i++)
	{
		tab[i] = new Dog();
		setDogIdea(tab[i]->getBrain(), i - 5);
	}
	for (int i = 0; i < 10; i++)
	{
		tab[i]->makeSound();
		printIdea(tab[i]);
	}
	delTabAnimal(tab, 10);
}

int main()
{
	createTabAnimal();
	return 0;
}
