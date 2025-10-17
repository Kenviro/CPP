/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:29:49 by ktintim           #+#    #+#             */
/*   Updated: 2025/10/17 15:38:07 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

PmergeVector::PmergeVector() : _order(0)
{
	
}

PmergeVector::PmergeVector(char *input) : _order(1)
{
	if (!input || !input[0])
		throw std::runtime_error("Error : empty string.");
	_start = clock();
	
	std::stringstream s(input);
	int nb;
	while (s >> nb)
	{
		if (nb < 0)
			throw std::invalid_argument("Error : negative number.");
		_data.push_back(nb);
	}
	printVec();
}

PmergeVector::PmergeVector(const PmergeVector& cpy)
{
	_data = cpy._data;
	_order = cpy._order;
	_start = cpy._start;
}

PmergeVector &PmergeVector::operator=(const PmergeVector& src)
{
	if (this != &src)
	{
		_data = src._data;
		_order = src._order;
		_start = src._start;
	}
	return *this;
}

PmergeVector::~PmergeVector()
{
	
}

void PmergeVector::printVec()
{
	std::vector<int>::iterator start = _data.begin();
	std::vector<int>::iterator end = _data.end();
	while (start != end)
	{
		std::cout << *start << " ";
		start++;
	}
	std::cout << std::endl;
}

void PmergeVector::exchangePair(std::vector<int>::iterator first, std::vector<int>::iterator sec)
{
	if (*first >= *sec)
		return ;
	
	std::vector<int>::iterator newPos = sec + _order;

	std::rotate(first, sec - 1, newPos);
}

void PmergeVector::sort()
{
	
}
