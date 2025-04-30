/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:40:55 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/30 10:50:12 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

/***************************Constructor & Destructor****************************/

AMateria::AMateria(std::string const & type) : _type(type) {
	// std::cout << "AMateria debug creation" << std::endl;
}

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
	(void)target;
}
