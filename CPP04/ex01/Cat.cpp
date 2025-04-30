/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:24:38 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/30 10:37:59 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/***************************Constructor & Destructor****************************/

Cat::Cat() : Animal()
{
	this->type = "Cat";
	brain = new Brain;
	std::cout << "Cat has been created" << std::endl;
}

Cat::Cat(const Cat& cpy) : Animal()
{
	this->type = cpy.type;
	if (this->brain)
	{
		delete this->brain;
		this->brain = 0;
	}
	if (cpy.brain)
	{
		this->brain = new Brain(*cpy.brain);
	}
}

Cat &Cat::operator=(const Cat& src)
{
	if (this != &src)
	{
		this->type = src.type;
		if (this->brain)
		{
			delete this->brain;
			this->brain = 0;
		}
		if (src.brain)
		{
			this->brain = new Brain(*src.brain);
		}
	}
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat is dead D:" << std::endl;
}

/*********************************Member function*******************************/

void	Cat::makeSound() const
{
	std::cout << "MIAOU MIAOU" << std::endl;
}

void	Cat::printIdeas(int index) const
{
	if (index < 0)
		brain->sayAllIdeas();
	else
		brain->sayIndexIdeas(--index);
}

void	Cat::addIdeas(std::string new_ideas) const
{
	brain->addIdeas(new_ideas);
}

void	Cat::removeIdea(int idea_index) const
{
	brain->removeIdea(idea_index);
}
