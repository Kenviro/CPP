/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:40:55 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/25 14:50:00 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

/***************************Constructor & Destructor****************************/

AMateria::AMateria(std::string const & type) {}

/********************************Getter & Setter********************************/

std::string const & AMateria::getType() const
{
	return type;
}

/*********************************Member function*******************************/

AMateria* AMateria::clone() const
{
	
}

void use(ICharacter& target)
{
	
}