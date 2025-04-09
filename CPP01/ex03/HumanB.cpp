/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:07:42 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/09 11:02:41 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL) , _name(name) {}

void	HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attack with their " << (*_weapon).getType() << std::endl;
	else
		std::cout << _name << " try to attack with the power of his mind (he will just got a headach)" << std::endl;
}

void	HumanB::setWeapon(Weapon &new_weapon)
{
	_weapon = &new_weapon;
}
