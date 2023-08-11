/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorr <mdorr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:40:47 by mdorr             #+#    #+#             */
/*   Updated: 2023/08/11 15:05:45 by mdorr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

//	PUBLIC FUNCTS

//		Non member functs

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	return ;
}

//		Member functs

void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	this->_nbDeposits++;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > this->_amount)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		return (true);
	}
	else
		return (false);

}

int		Account::checkAmount( void ) const
{
	return (0);
}

void	Account::displayStatus( void ) const
{
	return ;
}

//		Constructor

Account::Account(int initial_deposit)
{
	return ;
}

//		Destructor

Account::~Account( void )
{
	return ;
}

//	PRIVATE

static void	_displayTimestamp( void )
{
	return ;
}
