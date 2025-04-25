/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 09:21:17 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/24 11:28:24 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/***************************Constructor & Destructor****************************/

Brain::Brain() : nbIdeas(0)
{
	std::cout << "Brain constructor" << std::endl;
	addIdeas("Eat");
	addIdeas("Sleep");
	addIdeas("Reproduce");
}

Brain::Brain(const Brain& cpy)
{
	int index = 0;

	while (index != cpy.nbIdeas)
	{
		this->ideas[index] = cpy.ideas[index];
		index++;
	}
}

Brain &Brain::operator=(const Brain& src)
{
	if (this != &src)
	{
		int index = 0;

		while (index != src.nbIdeas)
		{
			this->ideas[index] = src.ideas[index];
			index++;
		}
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

/********************************Getter & Setter********************************/

void	Brain::sayIndexIdeas(int index)
{
	if (nbIdeas >= index)
		std::cout << "my idea " << (index + 1) << " is " << ideas[index] << std::endl;
	else
		std::cout << "My brain not that big !" << std::endl;
}

void	Brain::sayAllIdeas()
{
	int index = 0;

	while (index != nbIdeas)
	{
		std::cout << "my idea " << (index + 1) << " is " << ideas[index] << std::endl;
		index++;
	}
}

/*********************************Member function*******************************/

void	Brain::addIdeas(std::string new_ideas)
{
	if (nbIdeas != 99)
	{
		std::cout << new_ideas << " is a really good idea" << std::endl;
		ideas[nbIdeas] = new_ideas;
		nbIdeas++;
	}
	else 
		std::cout << "Brain is too much full *-*" << std::endl;
}

void	Brain::removeIdea(int idea_index)
{
	if (nbIdeas != 0 && idea_index <= nbIdeas)
	{
		std::cout << ideas[--nbIdeas] << " was a awfull idea" << std::endl;
		ideas[nbIdeas].clear();
		nbIdeas--;
	}
	else
		std::cout << "I don't know that much thing" << std::endl;
}