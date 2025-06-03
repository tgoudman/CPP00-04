/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 10:26:17 by tgoudman          #+#    #+#             */
/*   Updated: 2025/05/05 11:08:48 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define RESET		"\033[0m"
# define RED    	"\033[31m"
# define BLUE  		"\033[34m"
# define YELLOW		"\033[33m"

class ClapTrap
{
	protected:

		std::string		name;
		unsigned int	energyPoints;
		unsigned int	hitPoints;
		unsigned int	attackDamage;

	public:

					ClapTrap();
					ClapTrap(const ClapTrap &copie);
					ClapTrap(std::string name);
		ClapTrap 	&operator=(const ClapTrap &src);
					virtual ~ClapTrap();

		void		virtual attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};


#endif