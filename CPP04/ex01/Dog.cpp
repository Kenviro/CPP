/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:08:33 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/30 10:37:35 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/***************************Constructor & Destructor****************************/

Dog::Dog() : Animal()
{
	this->type = "dog";
	brain = new Brain;
	std::cout << "A dog has been created" << std::endl;
}

Dog::Dog(const Dog& cpy) : Animal()
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

Dog &Dog::operator=(const Dog& src)
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

Dog::~Dog()
{
	delete brain;
	std::cout << "The dog have ded" << std::endl;
}

/*********************************Member function*******************************/

void	Dog::makeSound() const
{
	std::cout << "Wouaf Wouaf" << std::endl;
}

void	Dog::printIdeas(int index) const
{
	if (index < 0)
		brain->sayAllIdeas();
	else
		brain->sayIndexIdeas(--index);
}

void	Dog::addIdeas(std::string new_ideas) const
{
	brain->addIdeas(new_ideas);
}

void	Dog::removeIdea(int idea_index) const
{
	brain->removeIdea(idea_index);
}
