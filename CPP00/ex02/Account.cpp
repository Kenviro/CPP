/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:07:51 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/08 00:00:43 by kilian           ###   ########.fr       */
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

void	Account::_displayTimestamp(void)
{
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

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";deposit:" << _nbDeposits
			  << ";withdrawal:" << _nbWithdrawals
			  << std::endl;
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts" << getNbAccounts()
			  << ";total:" << getTotalAmount()
			  << ";deposits:" << getNbDeposits()
			  << ";withdrawals:" << getNbWithdrawals()
			  << std::endl;	
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_amount = initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount 
			  << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount 
			  << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";p_amount:" << _amount
			  << ";deposit:" << deposit;
	_totalAmount += deposit;
	_amount += deposit;
	_totalNbDeposits++;
	std::cout << ";amount:" << _amount
			  << ";nb_deposits" << _nbDeposits
			  << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";p_amount:" << _amount
			  << ";withdrawal:";
	if (checkAmount() >= withdrawal)
	{
		std::cout << withdrawal;
		_totalAmount -= withdrawal;
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << ";amount:" << _amount
				  << ";nb_withdrawal" << _nbWithdrawals
				  << std::endl;
		return (true);
	}
	else 
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
}
