/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:08:50 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/29 16:07:28 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
class ICharacter;

/***************************Constructor & Destructor****************************/

Character::Character(std::string _name) : ICharacter(), name(_name), unequipedCount(0), equipedCount(0)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		unequiped[i] = 0;
	std::cout << "---Character " << name << " is created---" << std::endl;
}

Character::Character(const Character& cpy)
{
	for (int i = 0; i < equipedCount; i++)
	{
		delete inventory[i];
	}
	for (int i = 0; i < unequipedCount; i++)
	{
		delete unequiped[i];
	}
	name = cpy.getName();
	for (int i = 0; i < cpy.equipedCount; i++)
	{
		inventory[i] = cpy.inventory[i]->clone();
	}
	equipedCount = cpy.equipedCount;
	
}

Character &Character::operator=(const Character& src)
{
	if (this != &src)
	{
		for (int i = 0; i < equipedCount; i++)
		{
			delete inventory[i];
		}
		for (int i = 0; i < unequipedCount; i++)
		{
			delete unequiped[i];
		}
		name = src.getName();
		for (int i = 0; i < src.equipedCount; i++)
		{
			inventory[i] = src.inventory[i]->clone();
		}
		equipedCount = src.equipedCount;
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
	for (int i = 0; i < unequipedCount; i++)
	{
		delete unequiped[i];
	}
	std::cout << "---" << name << " is dead D:---" << std::endl;
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
		std::cout << "Materia " << m->getType() << " equiped" << std::endl;
		for (int i = 0; i < 4; i++)
		{
			if (!inventory[i])
			{
				inventory[i] = m;
				equipedCount++;
				return;
			}
		}
	}
	else
	{
		std::cout << "Can't equip more Materia" << std::endl;
		delete m;
	}
}

void Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
		return ;
	if (inventory[idx] && unequipedCount < 100)
	{
		unequiped[unequipedCount] = inventory[idx];
		unequipedCount++;
		inventory[idx] = 0;
		equipedCount--;
	}
	else
		std::cout << "Nothing to unequip" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (inventory[idx])
	{
		inventory[idx]->use(target);
	}
	else
		std::cout << "Nothing to use" << std::endl;
}
