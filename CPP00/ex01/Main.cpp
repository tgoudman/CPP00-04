/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 10:26:42 by tgoudman          #+#    #+#             */
/*   Updated: 2025/04/12 11:45:39 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <assert.h>

void	ft_Phonebook(PhoneBook &PhoneBook)
{
	std::string cmd;

	while(1)
	{
		std::cout << "Enter a command (EXIT, ADD, SEARCH)" << std::endl;
		std::cin >> cmd;
		if (std::cin.eof())
			break ;
		else if (cmd != "EXIT" && cmd != "ADD" && cmd != "SEARCH")
			std::cout << "Enter a valid command" << std::endl;
		else if (cmd == "EXIT")
			break ;
		else if (cmd == "ADD")
			PhoneBook.add_contact();
		else if (cmd == "SEARCH")
		{
			PhoneBook.print_all();
			PhoneBook.print_contact();
		}
	}
}


int main()
{
	PhoneBook phonebook;
	// phonebook.add_contact_default("Jean", "Dupont", "Juju", "0601020304", "Aime les croissants");
	// phonebook.add_contact_default("Marie", "Lemoine", "Mimi", "0605060708", "Craint les araignées");
	// phonebook.add_contact_default("Pierre", "Martin", "Pierrot", "0612345678", "Adore les films d'horreur");
	// phonebook.add_contact_default("Claire", "Durand", "Clairou", "0623456789", "Fait du yoga tous les matins");
	// phonebook.add_contact_default("Luc", "Bernard", "Lulu", "0634567890", "A un poisson rouge");
	// phonebook.add_contact_default("Sophie", "Thomas", "Soso", "0645678901", "Passe son temps à regarder des séries");
	// phonebook.add_contact_default("Paul", "Robert", "Polo", "0656789012", "Rêve de devenir astronaute");
	// phonebook.add_contact_default("Elise", "Girard", "Lili", "0667890123", "Collectionne des coquillages");
	ft_Phonebook(phonebook);
}
