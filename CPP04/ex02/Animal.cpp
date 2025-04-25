/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:35:56 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/23 14:09:38 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/***************************Constructor & Destructor****************************/

Animal::Animal()
{
	std::cout << "Animal has been created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal has been destroyed" << std::endl;	
}

Animal::Animal(const Animal& cpy)
{
	type = cpy.type;
}

Animal &Animal::operator=(const Animal& src)
{
	if (this != &src)
	{
		type = src.type;
	}
	return *this;
}

/********************************Getter & Setter********************************/

std::string Animal::getType() const
{
	return this->type;
}

/*********************************Member function*******************************/

void	Animal::makeSound() const
{
	std::cout << "Some generic Animal sound" << std::endl;
}
