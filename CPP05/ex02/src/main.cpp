/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 18:15:14 by kilian            #+#    #+#             */
/*   Updated: 2025/07/24 06:49:30 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat high(1, "highy");
	Bureaucrat middle(75, "middly");
	Bureaucrat low(150, "lowy");
// *********************************************************
	AForm *f1;
	f1 = new RobotomyRequest("Bob");
	low.signForm(*f1);
	middle.signForm(*f1);
	high.signForm(*f1);
	low.executeForm(*f1);
	middle.executeForm(*f1);
	high.executeForm(*f1);
	high.executeForm(*f1);
	high.executeForm(*f1);
	delete f1;
	std::cout << std::endl;
// *********************************************************
	AForm *f2;
	f2 = new ShrubberyCreation("YaRd");
	low.signForm(*f2);
	middle.signForm(*f2);
	high.signForm(*f2);
	low.executeForm(*f2);
	middle.executeForm(*f2);
	high.executeForm(*f2);
	delete f2;
	std::cout << std::endl;
// *********************************************************
	AForm *f3;
	f3 = new PresidentialPardon("Ganon");
	low.signForm(*f3);
	middle.signForm(*f3);
	high.signForm(*f3);
	low.executeForm(*f3);
	middle.executeForm(*f3);
	high.executeForm(*f3);
	delete f3;
}
