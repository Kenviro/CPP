/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:59:30 by kilian            #+#    #+#             */
/*   Updated: 2025/04/09 01:08:49 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl
			  << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
			  << std::endl << std::endl;
}

void Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl
			  << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			  << std::endl << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl
			  << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years, whereas you started working here just last month."
			  << std::endl << std::endl;
}

void Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl
			  << "This is unacceptable! I want to speak to the manager now."
			  << std::endl << std::endl;
}

int	Harl::get_level(std::string level)
{
	if (level == "DEBUG")
		return (1);
	else if (level == "INFO")
		return (2);
	else if (level == "WARNING")
		return (3);
	else if (level == "ERROR")
		return (4);
	else
		return (-1);
}

void Harl::complain(std::string level)
{
	int	digit_lvl;

	digit_lvl = get_level(level);
	switch (digit_lvl)
	{
		case 1:
			debug();
			info();
			warning();
			error();
			break ;
		case 2:
			info();
			warning();
			error();
			break ;
		case 3:
			warning();
			error();
			break ;
		case 4:
			error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}
