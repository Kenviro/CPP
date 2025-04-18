/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:06:27 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/16 11:27:37 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

/*************************Constructor & Destructor******************************/

ScravTrap::ScravTrap(std::string name) : ClapTrap(name)
{
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
	std::cout << "ScavTrap constructor called for " << name << std::endl;
}

ScravTrap::~ScravTrap()
{
	std::cout << "ScavTrap destructor called for " << name << std::endl;
}

ScravTrap::ScravTrap(const ScravTrap& src) : ClapTrap(src) {}

ScravTrap& ScravTrap::operator=(const ScravTrap& cpy)
{
	ClapTrap::operator=(cpy);
	return *this;
}

/*******************************Member function************************************/

void ScravTrap::guardGate()
{
	std::cout << "ScravTrap " << name << " is now in guard mod" << std::endl;
}

void ScravTrap::attack(const std::string& target)
{
	if (energyPoint > 0)
	{
		std::cout << "ScravTrap " << getName() << " attack " << target << ", causing " 
					<< attackDamage << " point of damage !" << std::endl;
		energyPoint--;
	}
}