/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:03:48 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/07 11:46:39 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() : Contact_added(0), is_full(false) {}

int Phonebook::get_ContactAdded()
{
	return (Contact_added);
}

int Phonebook::get_isfull()
{
	return (is_full);
}

void Phonebook::this_is_full()
{
	is_full = true;
}

void Phonebook::add_Contact()
{
	Contact_added++;
}

void	Phonebook::ADD()
{
	int			index;

	index = get_ContactAdded() % 8;
	
	book[index].set_Fname(add_Fname());
	book[index].set_Lname(add_Lname());
	book[index].set_Nickname(add_Nickname());
	book[index].set_PhoneNumber(add_Phone_number());
	book[index].set_DSecret(add_Dsecret());

	add_Contact();
	if (get_ContactAdded() == 8)
		this_is_full();
}

void	Phonebook::print_Fname(int index)
{
	std::string Fname;
	int	size;

	Fname = book[index].get_Fname();
	size = Fname.size();
	if (size <= 10)
	{
		while (size != 10)
		{
			std::cout << " ";
			size++;
		}
		std::cout << Fname << "|";
	}
	else
	{
		for (int i = 0; i != 8; i++)
		{
			std::cout << Fname[i];
		}
		std::cout << ".|";
	}
}

void	Phonebook::print_Lname(int index)
{
	std::string Lname;
	int	size;

	Lname = book[index].get_Lname();
	size = Lname.size();
	if (size <= 10)
	{
		while (size != 10)
		{
			std::cout << " ";
			size++;
		}
		std::cout << Lname << "|";
	}
	else
	{
		for (int i = 0; i != 8; i++)
		{
			std::cout << Lname[i];
		}
		std::cout << ".|";
	}
}

void	Phonebook::print_Nickname(int index)
{
	std::string Nickname;
	int	size;

	Nickname = book[index].get_Nickname();
	size = Nickname.size();
	if (size <= 10)
	{
		while (size != 10)
		{
			std::cout << " ";
			size++;
		}
		std::cout << Nickname << std::endl;
	}
	else
	{
		for (int i = 0; i != 8; i++)
		{
			std::cout << Nickname[i];
		}
		std::cout << "." << std::endl;
	}
}

void	Phonebook::print_contact(int index)
{
	std::cout << book[index - 1].get_Fname() << std::endl;
	std::cout << book[index - 1].get_Lname() << std::endl;
	std::cout << book[index - 1].get_Nickname() << std::endl;
	std::cout << book[index - 1].get_PhoneNumber() << std::endl;
	std::cout << book[index - 1].get_DSecret() << std::endl;
}

void	Phonebook::SEARCH()
{
	int	index_max;

	if (get_ContactAdded() == 0)
	{
		std::cout << "No contact added" << std::endl;
		return ;
	}

	if (get_isfull() == true)
		index_max = 7;
	else
		index_max = get_ContactAdded();
	
	for (int i = 0; i <= index_max; i++)
	{
		std::cout << "         " << i + 1 << "|";
		print_Fname(i);
		print_Lname(i);
		print_Nickname(i);
	}
	
	std::string str_index;
	int	index;
	std::cout << "Choose a contact" << std::endl;
	std::cin >> str_index;
	if (std::cin.eof()) {
		exit(1);
	}
	index = atoi(str_index.c_str());
	if (index <= 0 || index >= 9)
	{
		std::cout << "Wrong argument !" << std::endl;
		return ;
	}
	print_contact(index);
}
