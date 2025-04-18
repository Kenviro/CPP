/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:00:56 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/16 11:41:04 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*************************Constructor & Destructor******************************/

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	hitPoint = 100;
	energyPoint = 100;
	attackDamage = 30;
	std::cout << "FragTrap constructor called for " << name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) {}

FragTrap& FragTrap::operator=(const FragTrap& cpy)
{
	ClapTrap::operator=(cpy);
	return *this;
}

/*******************************Member function************************************/

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " want to do a high five" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (energyPoint > 0)
	{
		std::cout << "FragTrap " << getName() << " attack " << target << ", causing " 
					<< attackDamage << " point of damage !" << std::endl;
		energyPoint--;
	}
}