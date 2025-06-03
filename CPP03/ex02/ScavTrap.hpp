/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 12:00:27 by tgoudman          #+#    #+#             */
/*   Updated: 2025/05/05 13:28:05 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		bool _guardingGate;

	public:
					ScavTrap();
					ScavTrap(std::string name);
					ScavTrap(const ScavTrap &copy);
		ScavTrap	&operator=(const ScavTrap &src);
					virtual ~ScavTrap();

	void 			guardGate();
	void			virtual attack(const std::string& target);

};

#endif