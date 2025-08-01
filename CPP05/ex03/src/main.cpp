/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 18:15:14 by kilian            #+#    #+#             */
/*   Updated: 2025/08/01 22:05:24 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

int main()
{
	Intern	underpaid;
	Bureaucrat high(1, "highy");
	Bureaucrat middle(75, "middly");
	Bureaucrat low(150, "lowy");
// *********************************************************
	AForm *f1;
	f1 = underpaid.makeForm("RobotomyRequest", "Bob");
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
	f2 = underpaid.makeForm( "ShrubberyCreation","YaRd");
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
	f3 = underpaid.makeForm("PresidentialPardon", "Ganon");
	low.signForm(*f3);
	middle.signForm(*f3);
	high.signForm(*f3);
	low.executeForm(*f3);
	middle.executeForm(*f3);
	high.executeForm(*f3);
	delete f3;
	std::cout << std::endl;

	AForm *money;
	money = underpaid.makeForm("PrintMoney", "Rich");
	std::cout << "money " << money << std::endl;
}
