/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:04:44 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/28 16:06:07 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/mHeader.hpp"

/***************************Constructor & Destructor****************************/

Cure::Cure() : AMateria("Cure")
{
	std::cout << "Ice has been created" << std::endl;
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

void Cure::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; 
}