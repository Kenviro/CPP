/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:30:38 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/07 11:38:28 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main (void)
{
	Phonebook 	Phonebook;
	std::string	input;

	while (1)
	{
		std::cout << "Type command : ADD, SEARCH or EXIT" << std::endl;
		std::cin >> input;
		if (std::cin.eof()) {
			exit(1);
		}
		if (input.empty() == true || input == "EXIT")
		{
			return (0);
		}
		if (input == "ADD")
		{
			Phonebook.ADD();
		}
		if (input == "SEARCH")
		{
			Phonebook.SEARCH();
		}
	}
}