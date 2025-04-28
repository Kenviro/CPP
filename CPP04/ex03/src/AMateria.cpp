/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:40:55 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/28 13:59:02 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

/***************************Constructor & Destructor****************************/

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(const AMateria& cpy)
{
	_type = cpy.getType();
}

AMateria &AMateria::operator=(const AMateria& src)
{
	if (this != &src)
	{
		_type = src.getType();
	}
	return *this;
}

AMateria::~AMateria()
{
}


/********************************Getter & Setter********************************/

std::string const & AMateria::getType() const
{
	return _type;
}

/*********************************Member function*******************************/

void AMateria::use(ICharacter& target)
{
	
}
