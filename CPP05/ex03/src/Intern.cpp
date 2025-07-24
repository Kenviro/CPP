/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 07:18:10 by kilian            #+#    #+#             */
/*   Updated: 2025/07/24 12:15:08 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

/***************************Constructor & Destructor****************************/

Intern::Intern()
{
	
}

Intern::Intern(const Intern& cpy)
{
	(void)cpy;
}

Intern &Intern::operator=(const Intern& src)
{
	if (this != &src)
	{
		(void)src;
	}
	return *this;
}

Intern::~Intern()
{
	
}

/********************************Getter & Setter********************************/

/*********************************Member function*******************************/

AForm* Intern::makeSC(std::string target) const
{
	return new ShrubberyCreation(target);
}

AForm* Intern::makeRR(std::string target) const
{
	return new RobotomyRequest(target);
}

AForm* Intern::makePP(std::string target) const
{
	return new PresidentialPardon(target);
}

AForm*	Intern::makeForm(std::string formType, std::string formName)
{
	std::string	nameList[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
	typedef AForm* (Intern::*f)(std::string) const;
	f formList[3] = {&Intern::makeSC, &Intern::makeRR, &Intern::makePP};

	for (int i = 0; i < 3; i++)
	{
		if (!nameList[i].compare(formType))
		{
			std::cout << "Intern created form " << formName << std::endl;
			return (this->*formList[i])(formName);
		}
	}
	std::cout << "Error creating the form " << formType << " does not exist" << std::endl;
	return NULL;
}
