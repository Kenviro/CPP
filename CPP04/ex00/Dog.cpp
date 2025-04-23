/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:08:33 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/23 14:49:58 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/***************************Constructor & Destructor****************************/

Dog::Dog() : Animal()
{
	this->type = "dog";
	std::cout << "A dog has been created" << std::endl;
}

Dog::Dog(const Dog& cpy) : Animal()
{
	this->type = cpy.type;
}

Dog &Dog::operator=(const Dog& src)
{
	if (this != &src)
	{
		this->type = src.type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "The dog is die" << std::endl;
}

/*********************************Member function*******************************/

void	Dog::makeSound() const
{
	std::cout << "Wouaf Wouaf" << std::endl;
}
