/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:08:50 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/28 16:05:41 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/mHeader.hpp"

/***************************Constructor & Destructor****************************/

Character::Character(std::string _name) : ICharacter(), name(_name), unequipedCount(0), equipedCount(0)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		unequiped[i] = NULL;
	std::cout << "Character " << name << " is created" << std::endl;
}

Character::Character(const Character& cpy)
{
	name = cpy.getName();
}

Character &Character::operator=(const Character& src)
{
	if (this != &src)
	{
		name = src.getName();
	}
	return *this;
}

Character::~Character()
{
	std::cout << name << " is dead D:" << std::endl;
}


/********************************Getter & Setter********************************/

std::string const &Character::getName() const
{
	return name;
}

/*********************************Member function*******************************/

void Character::equip(AMateria* m)
{
	if (equipedCount < 4)
	{
		inventory[equipedCount] = m;
		equipedCount++;
	}
}

void Character::unequip(int idx)
{
	if (inventory[idx] && unequipedCount < 100)
	{
		unequiped[unequipedCount] = inventory[idx];
		inventory[idx] = NULL;
		unequipedCount++;
		equipedCount--;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (inventory[idx])
	{
		inventory[idx]->use(target);
	}
}
