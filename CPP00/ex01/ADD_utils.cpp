/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ADD_utils.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 10:46:42 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/07 11:39:26 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

std::string	Phonebook::add_Fname()
{
	std::string	input;

	while (1)
	{
		std::cout << "First name: " << std::endl;
		std::cin >> input;
		if (std::cin.eof()) {
			exit(1);
		}
		if (input.empty() == false)
		{
			return (input);
		}
		std::cout << "Please write something !" << std::endl;
	}
}

std::string	Phonebook::add_Lname()
{
	std::string	input;

	while (1)
	{
		std::cout << "Last name: " << std::endl;
		std::cin >> input;
		if (std::cin.eof()) {
			exit(1);
		}
		if (input.empty() == false)
		{
			return (input);
		}
		std::cout << "Please write something !" << std::endl;
	}
}

std::string	Phonebook::add_Nickname()
{
	std::string	input;

	while (1)
	{
		std::cout << "Nickname: " << std::endl;
		std::cin >> input;
		if (std::cin.eof()) {
			exit(1);
		}
		if (input.empty() == false)
		{
			return (input);
		}
		std::cout << "Please write something !" << std::endl;
	}
}

std::string	Phonebook::add_Phone_number()
{
	std::string	input;
	bool		is_number;

	while (1)
	{
		is_number = true;
		std::cout << "Phone number: " << std::endl;
		std::cin >> input;
		if (std::cin.eof()) {
			exit(1);
		}
		for (int i = 0; input[i]; i++)
		{
			if (isdigit(input[i]) == 0)
				is_number = false;
		}
		if (is_number == true)
		{
			return (input);
		}
		else
			std::cout << "Non numerical found, retry" << std::endl;
	}
}

std::string	Phonebook::add_Dsecret()
{
	std::string	input;

	while (1)
	{
		std::cout << "Darkest secret: " << std::endl;
		std::cin >> input;
		if (std::cin.eof()) {
			exit(1);
		}
		if (input.empty() == false)
		{
			return (input);
		}
		std::cout << "Please write something !" << std::endl;
	}
}
