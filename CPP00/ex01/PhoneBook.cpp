/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:41:48 by tgoudman          #+#    #+#             */
/*   Updated: 2025/04/12 11:38:32 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <stdio.h>
#include <limits>

PhoneBook::PhoneBook()
{
	std::cout << "Constructor phone book called" << std::endl;
	this->index = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Destructor phone book called" << std::endl;
}

void	PhoneBook::add_contact_default(std::string name, std::string lastname, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	this->list[this->index].setname(name);
	this->list[this->index].setLastname(lastname);
	this->list[this->index].setNickname(nickName);
	this->list[this->index].setPhoneNumber(phoneNumber);
	this->list[this->index].setdarkestSecret(darkestSecret);
	this->index++;
	if (this->index >= 8)
		this->index = 0;
}

int		PhoneBook::get_index()
{
	return(this->index);
}

void	PhoneBook::print_all(void)
{
	int	i;
	std::string name;
	std::string lastName;
	std::string nickName;

	i = -1;
	std::cout << std::setw(5) << "Index" << "|";
	std::cout << std::setw(10) << "Firstname" << "|";
	std::cout << std::setw(10) << "Lastname" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	while (++i < 8)
	{
		name = list[i].getname();
		lastName = list[i].getLastName();
		nickName = list[i].getNickName();
		if (name.length() > 9)
			name = name.substr(0, 9) + ".";
		if (lastName.length() > 9)
			lastName = lastName.substr(0, 9) + ".";
		if (nickName.length() > 9)
			nickName = nickName.substr(0, 9) + ".";
		std::cout << std::setw(5) << i + 1
		<< "|" << std::setw(10) << name
		<< "|" << std::setw(10) << lastName
		<< "|" << std::setw(10) << nickName
		<< std::endl;
	}
}

void	PhoneBook::print_contact()
{
	int	index;
	index = 0;
	while (list[index].isEmpty())
		index++;
	if (index == 8)
	{
		std::cout << "Contact are empty" << std::endl;
		return;
	}
	index = 0;
	while (1)
	{
		std::cout << "Type a contact's index" << std::endl;
		std::cin >> index;
		if (std::cin.eof())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			return ;
		}
		if (std::cin.fail()) 
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input. Please enter a number." << std::endl;
			continue;
		}
		else if (index > 0 && index < 9)
		{
			if (list[index - 1].isEmpty())
				std::cout << "Contact is empty" << std::endl;
			else
				break;
		}
		else
			std::cout << "Enter a valid index" << std::endl;
	}
	std::cout << "-------------------------------------------"<< std::endl;
	std::cout << "Name: "<< this->list[index - 1].getname() << std::endl;
	std::cout << "Lastname: "<< this->list[index - 1].getLastName() << std::endl;
	std::cout << "Nickname: "<< this->list[index - 1].getNickName() << std::endl;
	std::cout << "Phone number: "<< this->list[index - 1].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: "<< this->list[index - 1].getdarkestSecret() << std::endl;
	std::cout << "-------------------------------------------"<< std::endl;

}
void	PhoneBook::add_contact()
{
	int i;
	std::string name;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	i = get_index();
	std::cin.ignore();
	while(name.empty())
	{
		if (std::cin.eof() == true)
		{
			std::cout << "EOF activate\n";
			std::cin.clear();
			return ;
		}
		std::cout << "Firstname: " << std::endl;
		std::getline(std::cin, name);
	}
	this->list[this->index].setname(name);
	while(lastName.empty())
	{
		if (std::cin.eof())
		{
			std::cin.clear();
			return ;
		}
		std::cout << "Lastname: " << std::endl;
		std::getline(std::cin, lastName);
	}
	this->list[this->index].setLastname(lastName);
	while(nickName.empty())
	{
		if (std::cin.eof())
		{
			std::cin.clear();
			return ;
		}
		std::cout << "Nickname: " << std::endl;
		std::getline(std::cin, nickName);
	}
	this->list[this->index].setNickname(nickName);
	while(phoneNumber.empty())
	{
		if (std::cin.eof())
		{
			std::cin.clear();
			return ;
		}
		std::cout << "Phone number: " << std::endl;
		std::getline(std::cin, phoneNumber);
	}
	this->list[this->index].setPhoneNumber(phoneNumber);

	while(darkestSecret.empty())
	{
		if (std::cin.eof())
		{
			std::cin.clear();
			return ;
		}
		std::cout << "Darkest Secret: " << std::endl;
		std::getline(std::cin, darkestSecret);
	}
	this->list[i].setdarkestSecret(darkestSecret);
	this->index++;
	if (this->index >= 8)
		this->index = 0;
}

