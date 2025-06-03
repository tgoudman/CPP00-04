/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:52:44 by tgoudman          #+#    #+#             */
/*   Updated: 2025/04/09 14:07:32 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string brain;

	brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "String variable: " << "\033[34m" << &brain << "\033[0m" << "\n"
	<< "String pointeur: " << "\033[34m" << stringPTR << "\033[0m" << "\n"
	<< "String reference: " << "\033[34m" << &stringREF << "\033[0m" << "\n"
	<< std::endl;

	std::cout << "String variable: " << "\033[34m" << brain << "\033[0m" << "\n"
	<< "String pointeur: " << "\033[34m" << *stringPTR << "\033[0m" << "\n"
	<< "String reference: " << "\033[34m" << stringREF << "\033[0m" << "\n"
	<< std::endl;
	return 0;
}
