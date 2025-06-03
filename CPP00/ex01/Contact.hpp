/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:38:20 by tgoudman          #+#    #+#             */
/*   Updated: 2025/04/12 11:07:16 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
	public:
		Contact();
		Contact(std::string name, std::string lastname, std::string nickName, std::string phoneNumber, std::string darkestSecret);
		~Contact();

		bool		isEmpty(void);
		std::string	getname(void);
		std::string	getLastName(void);
		std::string	getNickName(void);
		std::string	getPhoneNumber(void);
		std::string	getdarkestSecret(void);
		std::string setname(std::string name);
		std::string setLastname(std::string lastName);
		std::string setNickname(std::string nickName);
		std::string setPhoneNumber(std::string phoneNumber);
		std::string setdarkestSecret(std::string phoneNumber);
};

#endif