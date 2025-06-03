/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:42:54 by tgoudman          #+#    #+#             */
/*   Updated: 2025/04/18 18:24:24 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void Harl::complain( std::string level )
{
	int			i;
	std::string const level_switch[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string map[3];
	void	(Harl::*function[4])(void);
 
	function[0] = &Harl::debug;
	function[1] = &Harl::info;
	function[2] = &Harl::warning;
	function[3] = &Harl::error;
	i = 0;
	while (i < 4)
	{
		if (level == level_switch[i])
			return (this->*function[i])();
		++i;
	}
	std::cout << "Unknow level" << std::endl;
}

void Harl::debug( void )
{
	std::cout << "\033[1;31m\"DEBUG\"\033[0m level: " 
	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" 
	<< std::endl;
}
void Harl::info( void )
{
	std::cout << "\033[1;31m\"INFO\"\033[0m level: "
	<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" 
	<< std::endl;
}
void Harl::warning( void )
{
	std::cout << "\033[1;31m\"WARNING\"\033[0m level: " 
	<< "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." 
	<< std::endl;
}
void Harl::error( void )
{
	std::cout << "\033[1;31m\"ERROR\"\33[0m level: " 
	<< "This is unacceptable! I want to speak to the manager now." 
	<< std::endl;	
}
