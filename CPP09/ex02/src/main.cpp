/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:37:44 by ktintim           #+#    #+#             */
/*   Updated: 2025/10/18 18:57:43 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error : only one string as argument accepted." << std::endl;
		return 1;
	}
	
	try
	{
		PmergeVector sort(av[1]);
		sort.sort();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
	
}
