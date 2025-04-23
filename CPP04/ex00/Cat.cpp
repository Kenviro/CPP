/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:24:38 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/23 14:29:33 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/***************************Constructor & Destructor****************************/

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat has been created" << std::endl;
}

Cat::Cat(const Cat& cpy) : Animal()
{
	this->type = cpy.type;
}

Cat &Cat::operator=(const Cat& src)
{
	if (this != &src)
	{
		this->type = src.type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat is dead D:" << std::endl;
}

/*********************************Member function*******************************/

void	Cat::makeSound() const
{
	std::cout << "MIAOU MIAOU" << std::endl;
}
