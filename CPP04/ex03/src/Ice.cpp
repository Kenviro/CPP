/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:23:32 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/29 14:46:39 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

/***************************Constructor & Destructor****************************/

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice has been created" << std::endl;
}

Ice::Ice(const Ice& cpy) : AMateria(cpy)
{
}

Ice &Ice::operator=(const Ice& src)
{
	if (this != &src)
	{
		AMateria::operator=(src);
	}
	return *this;
}

Ice::~Ice()
{
}


/********************************Getter & Setter********************************/

/*********************************Member function*******************************/

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; 
}