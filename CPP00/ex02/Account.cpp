/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nezumickey <nezumickey@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:31:02 by tgoudman          #+#    #+#             */
/*   Updated: 2025/04/08 17:32:42 by nezumickey       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <stdio.h>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( void )
{
	std::cout << "Constructor called" << std::endl;
}

Account::Account( int initial_deposit )
{
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << "\033[34m" << _accountIndex << "\033[0m" << ";"
	<< "amount:" << "\033[34m" << _amount << "\033[0m" << ";"
	<< "created"
	<< std::endl;
}

Account::~Account() 
{
	_displayTimestamp();
	std::cout << "index:" << "\033[34m" << _accountIndex << "\033[0m"
	<< ";amount:" << "\033[34m" << _amount << "\033[0m"
	<< ";closed" << std::endl;
}


int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return(_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return(_totalNbDeposits);	
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts" << "\033[34m" << _nbAccounts << "\033[0m" << ";"
	<< "total:" << "\033[34m" << _totalAmount  << "\033[0m" << ";"
	<< "deposit:" << "\033[34m" << _totalNbDeposits << "\033[0m" << ";"
	<< "withdrawals:" << "\033[34m" << _totalNbWithdrawals << "\033[0m" << ";"
	<< std::endl;
}

void Account::makeDeposit(int deposit) 
{
	_displayTimestamp();
	std::cout << "index:" << "\033[34m" << _accountIndex << "\033[0m"
	<< ";p_amount:" << "\033[34m" << _amount << "\033[0m";
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";deposit:" << "\033[34m" << deposit << "\033[0m";
	std::cout << ";amount:" << "\033[34m" << _amount << "\033[0m"
	<< ";nb_deposits:" << "\033[34m" << _nbDeposits << "\033[0m"
	<< std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << "\033[34m" << _accountIndex << "\033[0m"
	<< ";p_amount:" << "\033[34m" << _amount << "\033[0m"
	<< ";withdrawal:";
	if (withdrawal > this->checkAmount())
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout << "\033[34m" << withdrawal << "\033[0m"
	<< ";amount:" << "\033[34m" << _amount << "\033[0m"
	<< ";nb_withdrawals:" << "\033[34m" << _nbWithdrawals << "\033[0m"
	<< std::endl;
	return true;
}

void	Account::_displayTimestamp() 
{
	time_t now;
	struct tm *t;

	now = time(NULL);
	t = localtime(&now);
	std::cout << "["
	<< t->tm_year + 1900
	<< (t->tm_mon + 1 < 10 ? "0" : "") << t->tm_mon + 1
	<< (t->tm_mday < 10 ? "0" : "") << t->tm_mday
	<< "_"
	<< (t->tm_hour < 10 ? "0" : "") << t->tm_hour
	<< (t->tm_min < 10 ? "0" : "") << t->tm_min
	<< (t->tm_sec < 10 ? "0" : "") << t->tm_sec
	<< "] ";
}


int		Account::checkAmount( void ) const
{	
	return(this->_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << "\033[34m" << _accountIndex << "\033[0m" 
	<< ";" << "amount:" << "\033[34m" << _amount << "\033[0m" 
	<< ";" << "deposits:" << "\033[34m" << _nbDeposits << "\033[0m" 
	<< ";" << "withdrawals:" << "\033[34m" << _nbWithdrawals << "\033[0m" 
	<< ";" << std::endl;
}

