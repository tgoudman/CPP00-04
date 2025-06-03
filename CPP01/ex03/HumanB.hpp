/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:00:55 by tgoudman          #+#    #+#             */
/*   Updated: 2025/04/11 17:38:33 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
	Weapon *_weapon;
	std::string _name;
public:
	HumanB(std::string name);
	void setWeapon(Weapon &type);
	std::string getWeapon(void);
	void attack(void);
	~HumanB();
};

#endif