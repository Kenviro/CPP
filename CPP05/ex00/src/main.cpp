/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 18:15:14 by kilian            #+#    #+#             */
/*   Updated: 2025/07/03 19:24:35 by kilian           ###   ########.fr       */
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
		b.gradePlusSmth(2);
		std::cout << b << std::endl;
		b.gradeMinusMinus();
		std::cout << b << std::endl;
		b.gradeMinusSmth(2);
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
		std::cout << b << std::endl;
		b.gradeMinusSmth(5);
		std::cout << b << std::endl;
		b.gradePlusPlus();
		std::cout << b << std::endl;
		b.gradePlusSmth(4);
		std::cout << b << std::endl;
		b.gradePlusPlus();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
// *********************************************************
	std::cout << std::endl;
	try
	{
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
		Bureaucrat b(0, "Patrick2");
		std::cout << b << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
// *********************************************************
}