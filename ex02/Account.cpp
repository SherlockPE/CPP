/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabriciolopez <fabriciolopez@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:52:40 by fabriciolop       #+#    #+#             */
/*   Updated: 2024/05/09 18:55:17 by fabriciolop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>
#include <iostream>

//Getters (Accuount info)
int		Account::checkAmount( void ) const{return (_amount);}
//Getters (general info)
int	Account::getNbAccounts( void ){return (_nbAccounts);}
int	Account::getTotalAmount( void ){return (_totalAmount);}
int	Account::getNbDeposits( void ){return (_totalNbDeposits);}
int	Account::getNbWithdrawals( void ){return (_totalNbWithdrawals);}

//Setters
void	Account::makeDeposit( int deposit )
{
	_amount += deposit;
	_nbDeposits += 1;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (_amount - withdrawal < 0)
		return (false);
	_amount -= withdrawal;
	_nbWithdrawals += 1;
	return (true);
}

//Display Account info
void	Account::displayStatus( void ) const
{
	std::cout << "index:" << _accountIndex;
	std::cout << "amount:" << _amount;
	std::cout << "deposits:" << _nbDeposits;
	std::cout << "withdrawals:" << _nbWithdrawals;
}
//Display General Account's info
void	Account::displayAccountsInfos( void )
{
	std::cout << "accounts:" << getNbAccounts();
	std::cout << "total:" << getTotalAmount();
	std::cout << "deposits:" << getNbDeposits();
	std::cout << "withdrawals:" << getNbWithdrawals();
}

//Constructors
Account::Account(int initial_deposit)
{
	_accountIndex = 0;
	_amount = initial_deposit;
	_nbDeposits = 1;
	_nbWithdrawals = 0;
}
Account::~Account( void )
{
	
}



