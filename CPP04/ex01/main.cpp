/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:05:24 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/30 10:44:48 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	const Animal* i = new Dog();
	const Animal* j = new Dog(*(dynamic_cast<const Dog*>(i)));
	
	std::cout << "----------" << std::endl;
	const Dog* realdog = dynamic_cast<const Dog*>(i);
	if (realdog)
	{
		realdog->addIdeas("play with a ball");
		realdog->printIdeas(4);
	}
	delete i;
	const Dog* realcat = dynamic_cast<const Dog*>(j);
	if (realcat)
	{
		realcat->addIdeas("be usefull");
		realcat->printIdeas(-1);
		realcat->removeIdea(4);
	}
	std::cout << "----------" << std::endl;

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