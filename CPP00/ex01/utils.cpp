/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:01:55 by ktintim-          #+#    #+#             */
/*   Updated: 2025/03/31 16:35:59 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	print_first_name(phonebook phonebook, int index)
{
	int	size;

	size = phonebook.contacts[index].first_name.size();
	if (size > 10)
	{
		phonebook.contacts[index].first_name.erase(9, size - 9);
		phonebook.contacts[index].first_name.insert(9, ".");
		std::cout << phonebook.contacts[index].first_name;
	}
	else
	{
		while (size < 10)
		{
			std::cout << " ";
			size++;
		}
		std::cout << phonebook.contacts[index].first_name;
	}
	std::cout << "|";
}

void	print_last_name(phonebook phonebook, int index)
{
	int	size;

	size = phonebook.contacts[index].last_name.size();
	if (size > 10)
	{
		phonebook.contacts[index].last_name.erase(9, size - 9);
		phonebook.contacts[index].last_name.insert(9, ".");
		std::cout << phonebook.contacts[index].last_name;
	}
	else
	{
		while (size < 10)
		{
			std::cout << " ";
			size++;
		}
		std::cout << phonebook.contacts[index].last_name;
	}
	std::cout << "|";
}

void	print_nickname(phonebook phonebook, int index)
{
	int	size;

	size = phonebook.contacts[index].nickname.size();
	if (size > 10)
	{
		phonebook.contacts[index].nickname.erase(9, size - 9);
		phonebook.contacts[index].nickname.insert(9, ".");
		std::cout << phonebook.contacts[index].nickname;
	}
	else
	{
		while (size < 10)
		{
			std::cout << " ";
			size++;
		}
		std::cout << phonebook.contacts[index].nickname;
	}
}

int	input_error(phonebook phonebook, int index)
{
	if (phonebook.full == 1)
	{
		if (index > 8)
		{
			std::cout << "Wrong index" << std::endl;
			return (1);
		}
	}
	else
	{
		if (index > phonebook.contact_count || index <= 0)
		{
			std::cout << "Wrong index" << std::endl;
			return (1);
		}
	}
	return (0);
}
