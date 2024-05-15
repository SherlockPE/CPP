/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:52:40 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/15 16:07:24 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>
#include <iostream>
#include <time.h>

// Static initialization
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//Getters (Accuount info)
int		Account::checkAmount( void ) const{return (_amount);}
//Getters (general info)
int	Account::getNbAccounts( void ){return (_nbAccounts);}
int	Account::getTotalAmount( void ){return (_totalAmount);}
int	Account::getNbDeposits( void ){return (_totalNbDeposits);}
int	Account::getNbWithdrawals( void ){return (_totalNbWithdrawals);}



//---------------------------Displayers--------------------------------
//Display Account info
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals << std::endl;
}
//Display General Account's info
void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout 	<< "accounts:" << getNbAccounts()
				<< ";total:" << getTotalAmount()
				<< ";deposits:" << getNbDeposits()
				<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}
void	Account::_displayTimestamp( void )
{
	time_t time_since;
	struct tm	*actual_time;
	char		buffer[40];

	time_since = time(0);
	actual_time = localtime(&time_since);
	strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", actual_time);
	std::cout << buffer << " ";
}
//--------------------------------------------------------------------

//----------------------------Metods----------------------------------
//Make Deposit
void	Account::makeDeposit( int deposit )
{
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";deposit:" << deposit 
				<< ";amount:" << _amount + deposit 
				<< ";nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
}
//Make extraction
bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (_amount - withdrawal <= 0)
	{
		std::cout 	<< "index:" << _accountIndex
					<< ";p_amount:" << _amount
					<< ";withdrawal:" << "refused" << std::endl;
		return (false);
	}
	_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	std::cout 	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount
				<< ";withdrawal:" << withdrawal 
				<< ";amount:" << _amount - withdrawal 
				<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	return (true);
}

//--------------------------------------------------------------------


//---------------------------Constructor------------------------------
Account::Account(int initial_deposit)
{
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposit;
	_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex
				<< ";amount:" << _amount << ";created" << std::endl;
	_nbAccounts += 1;
}
//--------------------------------------------------------------------


//----------------------------Destructor------------------------------
Account::~Account( void )
{
	_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex
				<< ";amount:" << _amount << ";closed" << std::endl;
}

//--------------------------------------------------------------------