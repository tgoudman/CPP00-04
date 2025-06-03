/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 11:37:00 by tgoudman          #+#    #+#             */
/*   Updated: 2025/05/05 13:23:27 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void	inehereted_function(ClapTrap &o, std::string name)
{
	o.attack(name);
}

int main()
{
	ClapTrap Clap("Clap");
	ScavTrap Scav("Scav");
	FragTrap Robot("Robot");

	inehereted_function(Clap, "target");
	inehereted_function(Scav, "target");
	inehereted_function(Robot, "target");
	Robot.highFivesGuys();
	return 0;
}
