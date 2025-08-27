/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 22:43:35 by ktintim           #+#    #+#             */
/*   Updated: 2025/08/27 17:44:09 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"
#include <vector>
#include <deque>

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
		easyfind(a, 5);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "=================================" << std::endl;

	std::deque<int> b(10);
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
