/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:42:37 by tgoudman          #+#    #+#             */
/*   Updated: 2025/04/12 11:08:29 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "Default constructor called" << std::endl;
}

Contact::Contact(std::string name, std::string lastname, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	this->_firstName = name;
	this->_lastName = lastname;
	this->_nickName = nickName;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
	std::cout << "Custom constructor called" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Destructor called" << std::endl;
}

std::string	Contact::getname(void) {
	return (this->_firstName);
}

std::string	Contact::getLastName(void) {
	return (this->_lastName);
}

std::string	Contact::getNickName(void) {
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber(void) {
	return (this->_phoneNumber);
}

std::string	Contact::getdarkestSecret(void) {
	return (this->_darkestSecret);
}

std::string	Contact::setname(std::string name) {
	return (this->_firstName = name);
}

std::string	Contact::setLastname(std::string name) {
	return (this->_lastName = name);
}

std::string	Contact::setNickname(std::string name) {
	return (this->_nickName = name);
}

std::string	Contact::setPhoneNumber(std::string name) {
	return (this->_phoneNumber = name);
}

std::string	Contact::setdarkestSecret(std::string darkestSecret) {
	return (this->_darkestSecret = darkestSecret);
}

bool		Contact::isEmpty(void)
{
	if(_firstName.empty())
		return(true);
	else
		return(false);
}