/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:54:44 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/16 10:51:07 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*************************Constructor & Destructor******************************/

ClapTrap::ClapTrap(std::string src_name) : name(src_name),  hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " created !" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destrocted" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	name = src.getName();
	hitPoint = src.getHitPoint();
	energyPoint = src.getEnergyPoint();
	attackDamage = src.getAttackDamage();
}

ClapTrap &ClapTrap::operator=(const ClapTrap& cpy)
{
	if (this != &cpy)
	{
		name = cpy.getName();
		hitPoint = cpy.getHitPoint();
		energyPoint = cpy.getEnergyPoint();
		attackDamage = cpy.getAttackDamage();
	}
	return *this;
}

/*****************************Getter & Setter**********************************/

std::string ClapTrap::getName() const
{
	return name;
}

int ClapTrap::getHitPoint() const
{
	return hitPoint;
}

int	ClapTrap::getEnergyPoint() const
{
	return energyPoint;
}

int	ClapTrap::getAttackDamage() const
{
	return attackDamage;
}

/*******************************Member function************************************/

void ClapTrap::attack(const std::string& target)
{
	if (energyPoint > 0)
	{
		std::cout << "ClapTrap " << name << " attack " << target << ", causing " 
					<< getAttackDamage() << " point of damage !" << std::endl;
		energyPoint--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " took " << amount << " point of damage" << std::endl;
	hitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoint > 0)
	{
		std::cout << "ClapTrap " << name << " repair itself for " << amount << 
					 " hitpoint" << std::endl;
		energyPoint--;
		hitPoint += amount;
	}
}
