/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 15:29:03 by ktintim           #+#    #+#             */
/*   Updated: 2025/09/02 22:17:34 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#include <iostream>

void	chartTest()
{
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	// std::cout << sp;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void	bigTest()
{
	Span sp(50);
	
	sp.addRangeNumber(400, 455);
	
	// std::cout << sp;
	std::cout << sp.longestSpan() << '\n' << sp.shortestSpan() << std::endl;
}

void	biggerTest()
{
	Span sp(100000);

	sp.addRangeNumber(0, 99999);

	// std::cout << sp;
	std::cout << sp.shortestSpan() << '\n' << sp.longestSpan() << std::endl;
}

int	main()
{
	chartTest();
	std::cout << "\n===============================================\n" << std::endl;
	bigTest();
	std::cout << "\n===============================================\n" << std::endl;
	biggerTest();

	return 0;
}
