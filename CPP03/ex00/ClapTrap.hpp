/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 10:26:17 by tgoudman          #+#    #+#             */
/*   Updated: 2025/05/05 13:33:23 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define RESET		"\033[0m"
# define RED    	"\033[31m"
# define BLUE  		"\033[34m"
# define GREY		"\033[31m"

class ClapTrap
{
	private:

		std::string		_name;
		unsigned int	_energyPoints;
		unsigned int	_hitPoints;
		unsigned int	_attackDamage;

	public:

					ClapTrap();
					ClapTrap(ClapTrap &copie);
					ClapTrap(std::string name);
		ClapTrap 	&operator=(const ClapTrap &src);
					~ClapTrap();

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};


#endif