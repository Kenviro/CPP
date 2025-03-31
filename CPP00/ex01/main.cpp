/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:48:02 by kilian            #+#    #+#             */
/*   Updated: 2025/03/31 16:38:24 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

static void	add_contact(phonebook &phonebook)
{
	std::string input;
	static int	index = 0;

	if (index == 8)
	{
		phonebook.contact_count = 8;
		phonebook.full = 1;
		index = 0;
	}
	std::cin.ignore();
	std::cout << "First name: ";
	std::getline(std::cin, input);
	phonebook.contacts[index].first_name = input;

	std::cout << "Last name: ";
	std::getline(std::cin, input);
	phonebook.contacts[index].last_name = input;

	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	phonebook.contacts[index].nickname = input;

	std::cout << "Phone number: ";
	std::getline(std::cin, input);
	phonebook.contacts[index].phone_number = input;

	std::cout << "Darkest secret: ";
	std::getline(std::cin, input);
	phonebook.contacts[index].darkest_secret = input;

	index++;
	if (phonebook.contact_count != 8)
		phonebook.contact_count = index;
}

static void	print_contact(phonebook phonebook)
{
	int	ref;
	
	if (phonebook.full == 1)
		ref = 8;
	else 
		ref = phonebook.contact_count;
	for (int index = 0; index < ref; index++)
	{
		std::cout << "         " << index + 1 << "|";
		print_first_name(phonebook, index);
		print_last_name(phonebook, index);
		print_nickname(phonebook, index);
		std::cout << std::endl;
	}
}

static void search_contact(phonebook &phonebook)
{
	std::string	input;
	int			index;

	print_contact(phonebook);
	std::cin >> input;
	for (int i = 0; input[i] != '\0'; i++)
	{
		if (isdigit(input[i]) == 0)
		{
			std::cout << "Error: Non numerical index" << std::endl;
			return ;
		}
	}
	index = atoi(input.c_str());
	if (input_error(phonebook, index) == 1)
		return ;
	index--;
	std::cout << phonebook.contacts[index].first_name << std::endl;
	std::cout << phonebook.contacts[index].last_name << std::endl;
	std::cout << phonebook.contacts[index].nickname << std::endl;
	std::cout << phonebook.contacts[index].phone_number << std::endl;
	std::cout << phonebook.contacts[index].darkest_secret << std::endl;
}

int	main(void)
{
	phonebook phonebook;
	std::string input;

	phonebook.contact_count = 0;
	phonebook.full = 0;
	while (1)
	{
		std::cin >> input;
		if (input == "EXIT")
			return (0);
		else if (input == "ADD")
			add_contact(phonebook);
		else if (input == "SEARCH")
			search_contact(phonebook);
	}
	return (0);
}
