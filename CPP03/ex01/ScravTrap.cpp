/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:06:27 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/15 16:10:57 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

/*************************Constructor & Destructor******************************/

ScravTrap::ScravTrap(std::string src_name) : ClapTrap(src_name), hitPoint(100), energyPoint(50), attackDamage(20) 
{
	std::cout << "ScravTrap " << getName() << " created !" << std::endl;
}

ScravTrap::~ScravTrap()
{
	std::cout << "ScravTrap " << getName() << " destroyed" << std::endl;
}

ScravTrap::ScravTrap(const ScravTrap& src) : ClapTrap(src.name)
{
	hitPoint = src.hitPoint;
	energyPoint = src.energyPoint;
	attackDamage = src.attackDamage;
}

ScravTrap &ScravTrap::operator=(const ScravTrap& cpy)
{
	if (this != &cpy)
	{
		setName(cpy.getName());
		setHitPoint(cpy.getHitPoint());
		setEnergyPoint(cpy.getEnergyPoint());
		setAttackDamage(cpy.getAttackDamage());
	}
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