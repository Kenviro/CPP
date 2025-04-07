/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:07:51 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/07 16:15:34 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

int	Account::checkAmount() const
{
	return (_amount);
}

void Account::_displayTimestamp(void) {
	std::time_t now = std::time(0); // Obtenir l'heure actuelle
    std::tm *localTime = std::localtime(&now); // Convertir en heure locale

    // Afficher le timestamp au format [YYYYMMDD_HHMMSS]
    std::cout << "[" 
              << (localTime->tm_year + 1900) // Année
              << (localTime->tm_mon + 1)    // Mois (0-11, donc +1)
              << localTime->tm_mday        // Jour
              << "_"
              << localTime->tm_hour        // Heure
              << localTime->tm_min         // Minute
              << localTime->tm_sec         // Seconde
              << "] ";
}

void	::

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount = initial_deposit;
	_amount = initial_deposit;
}

void Account::makeDeposit(int deposit)
{
	_totalAmount += deposit;
	_amount += deposit;
	_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (checkAmount() <= withdrawal)
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		return (true);
	}
	else 
	{
		return (false);
	}
}
