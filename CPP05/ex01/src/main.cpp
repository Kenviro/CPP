/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 18:15:14 by kilian            #+#    #+#             */
/*   Updated: 2025/07/22 07:11:15 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main()
{
// *********************************************************
	try
	{
		Bureaucrat b(150, "Pepe");
		std::cout << b << std::endl;
		Form f("Form_a", 145, 130);
		std::cout << f << std::endl;
		b.signForm(f);
		b.gradePlusSmth(5);
		std::cout << b << std::endl;
		b.signForm(f);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
// *********************************************************
	std::cout << std::endl;
	try
	{
		Bureaucrat b(1, "Jhonny");
		Form f("form_b", 5, 1);
		std::cout << b << std::endl;
		std::cout << f << std::endl;
		b.signForm(f);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
// *********************************************************
	std::cout << std::endl;
	try
	{
		Form f("form_b", 0, 151);
		Bureaucrat b(160, "Patrick");
		std::cout << b << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
// *********************************************************
	std::cout << std::endl;
	try
	{
		Form f("form_b", 151, 1);
		Bureaucrat b(0, "Patrick2");
		std::cout << b << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
// *********************************************************
}