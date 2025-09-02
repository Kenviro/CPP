/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:32:43 by ktintim           #+#    #+#             */
/*   Updated: 2025/09/02 15:36:54 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#include <iostream>
#include <algorithm>

Span::Span() : _n(0)
{
	std::cout << "get out from here !!!1!!" << std::endl;
}

Span::Span(unsigned int n) : _n(n)
{

}

Span::Span(const Span& cpy) : _n(cpy._n)
{
	this->_array = cpy._array;
}

Span &Span::operator=(const Span& src)
{
	if (this != &src)
	{
		this->_array = src._array;
	}
	return *this;
}

Span::~Span()
{
	
}

void Span::addNumber(int n)
{
	try
	{
		_array.push_back(n);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void Span::addRangeNumber(int first, int last)
{
	try
	{
		while (first <= last)
		{
			_array.push_back(first);
			first++;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int Span::shortestSpan()
{
	return 0;
}

int Span::longestSpan()
{
	std::vector<int> cpy;

	cpy = _array;
	std::sort(cpy.begin(), cpy.end());

	return (cpy[0] - cpy[cpy.size()]);
}
