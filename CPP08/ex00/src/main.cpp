/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 22:43:35 by ktintim           #+#    #+#             */
/*   Updated: 2025/08/08 23:04:04 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"
#include <vector>
#include <array>

int	main()
{
	int myints[] = {16,2,77,29,18,154};
	std::vector<int> a(myints, myints + sizeof(myints) / sizeof(int));
	
	std::cout << "a contain ";
	for (unsigned long i = 0; i < a.size(); i++)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	try 
	{
		easyfind(a, 18);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::array<int, 10> b;
	for (int i = 0; i < 10; i++)
	{
		b[i] = i;
	}
	std::cout << "b contain ";
	for (unsigned long i = 0; i < b.size(); i++)
	{
		std::cout << b[i] << " ";
	}
	std::cout << std::endl;
	try 
	{
		easyfind(b, 6);
		easyfind(b, 18);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
