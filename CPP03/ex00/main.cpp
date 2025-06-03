/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 11:37:00 by tgoudman          #+#    #+#             */
/*   Updated: 2025/05/02 11:41:24 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::string	name = "ClapTrap";
	ClapTrap ClapTrap(name);

	ClapTrap.beRepaired(20);
	ClapTrap.attack("Regis");
	ClapTrap.takeDamage(150);
	return 0;
}
