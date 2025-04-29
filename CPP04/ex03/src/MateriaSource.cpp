/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:12:41 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/29 15:24:19 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

/***************************Constructor & Destructor****************************/

MateriaSource::MateriaSource() : materiaCount(0)
{
	for (int i = 0; i < 4; i++)
		learned[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& cpy)
{
	for (int i = 0; i < materiaCount; i++)
	{
		delete learned[i];
	}
	for (int i = 0; i < 4; i++)
		learned[i] = cpy.learned[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource& src)
{
	if (this != &src)
	{
		for (int i = 0; i < materiaCount; i++)
		{
			delete learned[i];
		}
		for (int i = 0; i < 4; i++)
			learned[i] = src.learned[i];
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < materiaCount; i++)
	{
		delete learned[i];
	}
}

/********************************Getter & Setter********************************/

/*********************************Member function*******************************/

void MateriaSource::learnMateria(AMateria* src)
{
	if (materiaCount < 4 && src)
	{
		learned[materiaCount] = src;
		materiaCount++;
	}
	else
	{
		std::cout << "Can't learn more Materia" << std::endl;
		delete src;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (learned[i] && learned[i]->getType() == type)
		{
			return learned[i]->clone();
		}
	}
	return NULL;
}
