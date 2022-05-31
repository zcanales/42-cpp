/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:27:11 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/02 17:39:06 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>
#include <iomanip> //setfill
#include <ctime> //timestamp

// ************************************************************************** //
//                    		 Constructor		                              //
// ************************************************************************** //
Account::Account(void){
}

Account::Account( int initial_deposit ) : _amount(initial_deposit), _nbDeposits(0),
 _nbWithdrawals(0) {
	this->_displayTimestamp();
	this->_accountIndex = this->getNbAccounts() - 1;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	_totalAmount += initial_deposit;
	std::cout << "created" << std::endl;	
}

// ************************************************************************** //
//                               Destructor                                   //
// ************************************************************************** //
Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;	
}

// ************************************************************************** //
//                     Initialitation attributes                              //
// ************************************************************************** //
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// ************************************************************************** //
//                    		 Getters			                              //
// ************************************************************************** //
int	Account::getNbAccounts( void ){return (++_nbAccounts);
}
int	Account::getTotalAmount( void ){return (_totalAmount);
}
int	Account::getNbDeposits( void ){return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void ){return (_totalNbWithdrawals);
}

// ************************************************************************** //
//                    		 Display			                              //
// ************************************************************************** //
void	Account::_displayTimestamp( void )
{
	struct tm *get_time;
	std::time_t result;

	result = std::time(nullptr);
	get_time = std::localtime(&result);
	std::cout << "[";
	std::cout << std::setw(4) << get_time->tm_year + 1900;
	std::cout << std::setw(2) << get_time->tm_mon << std::setfill('0');
	std::cout << std::setw(2) << std::setfill('0') << get_time->tm_mday;	
	std::cout << "_";
	std::cout << std::setw(2) << std::setfill('0') << get_time->tm_hour;	
	std::cout << std::setw(2) << std::setfill('0') << get_time->tm_min;	
	std::cout << std::setw(2) << std::setfill('0') << get_time->tm_sec;	
	std::cout << "] ";
}
void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;

	

}
void	Account::displayAccountsInfos(){
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";" ;
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

// ************************************************************************** //
//                 		 	  	Make		 	                              //
// ************************************************************************** //
void	Account::makeDeposit(int deposit){
	_displayTimestamp();
	this->_nbDeposits += 1;
	_totalNbDeposits += 1;
	_totalAmount += deposit;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ";";	
	std::cout << "nb_deposits:" << this->_nbDeposits  << std::endl;
}

int	Account::checkAmount( void ) const{
	if (this->_amount < 0)
		return (1);
	return (0);
}

bool	Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();


	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	this->_amount -= withdrawal;
	if (this->checkAmount())
	{
		this->_amount += withdrawal;
		std::cout << "withdrawal:refused" << std::endl;
		return (0);
	}
	this->_nbWithdrawals += 1;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals += 1;
	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << this->_amount << ";";	
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals  << std::endl;
	return (1);
}
