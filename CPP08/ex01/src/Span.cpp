/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:32:43 by ktintim           #+#    #+#             */
/*   Updated: 2025/10/03 12:02:04 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#include <algorithm>
#include <limits>

Span::Span() : _size(0)
{
	std::cout << "get out from here !!!1!!" << std::endl;
}

Span::Span(unsigned int n) : _size(n)
{

}

Span::Span(const Span& cpy) : _size(cpy._size)
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
		if (_array.size() < this->_size)
			_array.push_back(n);
		else
			throw ExceedMaxSizeException();
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
			if (_array.size() < this->_size)
				_array.push_back(first);
			else
				throw ExceedMaxSizeException();
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
	int ret = __INT_MAX__;
	std::vector<int> cpy;

	cpy = _array;
	std::sort(cpy.begin(), cpy.end());
	
	for (std::vector<int>::iterator it = cpy.begin(); it != cpy.end(); it++)
	{
		std::vector<int>::iterator start = it + 1;
		if (start == cpy.end())
			break ;
		if (*start - *it < ret)
			ret = *start - *it;
	}

	return ret;
}

int Span::longestSpan()
{
	std::vector<int> cpy;

	cpy = _array;
	std::sort(cpy.begin(), cpy.end());
	
	return (cpy[cpy.size() - 1] - cpy[0]);
}

int	Span::getIndex(int i) const
{
	return _array[i];
}

int	Span::getMaxSize() const
{
	return _size;
}

const char* Span::ExceedMaxSizeException::what() const throw()
{
	return "Max size for span no more add >:(";
}

std::ostream &operator<<(std::ostream& stream, const Span& s)
{
	stream << "size = " << s.getMaxSize() << " ";

	for (int i = 0; i < s.getMaxSize(); i++)
	{
		stream << "[" << s.getIndex(i) << "]";
	}
	return stream;
}
