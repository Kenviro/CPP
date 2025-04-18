/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:44:06 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/16 16:03:44 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*************************Constructor & Destructor******************************/

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), ScravTrap(name), FragTrap(name), _name(name)
{
	hitPoint = FragTrap::hitPoint;
	energyPoint = ScravTrap::energyPoint;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap constructor called for " << _name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap desctructor called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
	: ClapTrap(src), ScravTrap(src), FragTrap(src), _name(src._name)
{
	ClapTrap::name += "_clap_name";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& cpy)
{
	ClapTrap::operator=(cpy);
	return *this;
}

/*******************************Member function************************************/

void DiamondTrap::attack(const std::string& target)
{
	ScravTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am Diamond trap " << _name << " from claptrap " << name << std::endl;
}
