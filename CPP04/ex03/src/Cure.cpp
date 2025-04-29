/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:04:44 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/29 14:48:39 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

/***************************Constructor & Destructor****************************/

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure has been created" << std::endl;
}

Cure::Cure(const Cure& cpy) : AMateria(cpy)
{
}

Cure &Cure::operator=(const Cure& src)
{
	if (this != &src)
	{
		AMateria::operator=(src);
	}
	return *this;
}

Cure::~Cure()
{
}


/********************************Getter & Setter********************************/

/*********************************Member function*******************************/

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl; 
}