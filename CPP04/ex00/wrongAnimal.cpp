/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:18:35 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/23 15:24:35 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

/***************************Constructor & Destructor****************************/

WrongAnimal::WrongAnimal() : type("hellCreature")
{
	std::cout << "A wrong animal has been created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy)
{
	type = cpy.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& src)
{
	if (this != &src)
	{
		type = src.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "the wrong animal has been killed" << std::endl;
}


/********************************Getter & Setter********************************/

std::string WrongAnimal::getType() const
{
	return type;
}

/*********************************Member function*******************************/

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong animal is making noise" << std::endl;
}
