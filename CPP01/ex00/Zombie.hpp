/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 18:02:59 by nezumickey        #+#    #+#             */
/*   Updated: 2025/04/18 18:57:34 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include "randomChump.cpp"

class Zombie
{
	public:
	
	Zombie();
	Zombie(std::string name);
	void announce( void);
	void randomChump( std::string name );
	Zombie* newZombie( std::string name );
	~Zombie();


	private:
	std::string _name;
};

#endif
