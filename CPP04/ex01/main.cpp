/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:05:24 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/24 11:43:26 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	const Animal* i = new Dog();
	const Animal* j = new Cat();
	
	std::cout << "----------" << std::endl;
	const Dog* realdog = dynamic_cast<const Dog*>(i);
	if (realdog)
	{
		realdog->addIdeas("play with a ball");
		realdog->printIdeas(4);
	}
	const Cat* realcat = dynamic_cast<const Cat*>(j);
	if (realcat)
	{
		realcat->addIdeas("be usefull");
		realcat->printIdeas(-1);
		realcat->removeIdea(4);
	}
	std::cout << "----------" << std::endl;

	delete i;
	delete j;

	std::cout << "<-------------------------------------------->" << std::endl;

	int	nbr = 4;

	const Animal* Animals[nbr];

	for (int i = 0; i != nbr; i++)
	{
		if ((i % 2) == 0)
			Animals[i] = new Dog();
		else
			Animals[i] = new Cat();
	}
	std::cout << "--------deleting---------" << std::endl;
	for (int i = 0; i != nbr; i++)
	{
		delete Animals[i];
	}
}