/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 14:07:34 by ktintim           #+#    #+#             */
/*   Updated: 2025/08/08 18:44:46 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Array.tpp"

int main()
{
	Array<float> a;
	std::cout << "size of a = " << a.size() << std::endl;
	
	std::cout << std::endl;

	Array<int> b(5);
	std::cout << "size of b = " << b.size() << std::endl;
	for (int i = 0; i < 5; i++)
	{
		b[i] = rand() % 150;
		std::cout << "b[" << i << "] = " << b[i] << std::endl;
	}
	Array<int> b2(b);
	std::cout << "size of b2 = " << b2.size() << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "before rand b2[" << i << "] = " << b2[i] << std::endl;
	}
	for (int i = 0; i < 5; i++)
	{
		b2[i] = rand() % 150;
		std::cout << "after rand b2[" << i << "] = " << b2[i] << std::endl;
	}
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << "b[" << i << "] = " << b[i] << std::endl;
	}
	
	b = b2;

	std::cout << "after assignement opperator" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "b[" << i << "] = " << b[i] << std::endl;
	}
	
	std::cout << std::endl;

	Array<char> c(10);
	
	std::cout << "size of c = " << c.size() << std::endl;
	try
	{
		std::cout << c[12] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;	
}
