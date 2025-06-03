/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:37:40 by tgoudman          #+#    #+#             */
/*   Updated: 2025/04/12 11:27:41 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
	private:
		Contact list[8];
		int		index;

	public:
		PhoneBook();
		int get_index();
		void print_contact();
		void add_contact(void);
		void add_contact_default(std::string name, std::string lastname, std::string nickName, std::string phoneNumber, std::string darkestSecret);
		void print_all(void);
		~PhoneBook();
};

#endif