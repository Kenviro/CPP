/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:29:49 by ktintim           #+#    #+#             */
/*   Updated: 2025/10/20 18:53:13 by ktintim          ###   ########.fr       */
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
	long int nb;
	while (s >> nb)
	{
		if (nb < 0)
			throw std::invalid_argument("Error : negative number.");
		if (nb > __INT_MAX__)
			throw std::invalid_argument("Error : number above INT_MAX.");
		_data.push_back(nb);
	}
	// printVec();
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
	if (*first <= *sec)
		return ;
	

	std::vector<int>::iterator newPos = sec + 1;

	std::rotate(first - _order + 1, sec - _order + 1, newPos);
}

void PmergeVector::merge()
{
	if ((_order * 2) > _data.size())
		return ;
		
	std::vector<int>::iterator first = _data.begin() + (_order - 1);
	std::vector<int>::iterator sec = _data.begin() + (_order * 2 - 1);

	while (sec <= _data.end())
	{
		exchangePair(first, sec);
		
		first += _order * 2;
		sec += _order * 2;
	}

	_order *= 2;
	merge();
}

std::vector<int> PmergeVector::createPend()
{
	std::vector<int> pend;

	std::vector<int>::iterator first = _data.begin() + (_order - 1);
	std::vector<int>::iterator sec = _data.begin() + (_order * 2 - 1);

	while (sec <= _data.end())
	{
		first += _order * 2;
		sec += _order * 2;

		pend.insert(pend.end() - 1, sec - (_order - 1), sec);
	}

	return pend;
}

std::vector<int> PmergeVector::createMain()
{
	std::vector<int> main;

	std::vector<int>::iterator first = _data.begin() + (_order - 1);
	std::vector<int>::iterator sec = _data.begin() + (_order * 2 - 1);

	while (sec <= _data.end())
	{
		first += _order * 2;
		sec += _order * 2;

		main.insert(main.end() - 1, first - (_order - 1), first);
	}

	return main;
}

void PmergeVector::insertion()
{
	std::vector<int>::iterator first = _data.begin() + (_order - 1);
	std::vector<int>::iterator sec = _data.begin() + (_order * 2 - 1);

	std::vector<int> main = createMain();
	std::vector<int> pend = createPend();
	
	// insert pend in main


	_data = main;
	if (_order == 1)
		return ;

	_order /= 2;
	insertion();
}

void PmergeVector::sort()
{
	merge();
	insertion();
	printVec();
}
