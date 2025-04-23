/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:32:32 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/23 15:24:01 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongCat.hpp"

/***************************Constructor & Destructor****************************/

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "A wrong cat is born" << std::endl;
}

WrongCat::WrongCat(const WrongCat& cpy) : WrongAnimal()
{
	this->type = cpy.type;
}

WrongCat &WrongCat::operator=(const WrongCat& src)
{
	if (this != &src)
	{
		this->type = src.type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "The wrong cat is dead (hopefully)" << std::endl;
}

/*********************************Member function*******************************/

void WrongCat::makeSound() const
{
	std::cout << "Some wrong cat sound of agony" << std::endl;
}
