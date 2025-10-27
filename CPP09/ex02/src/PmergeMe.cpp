/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:29:49 by ktintim           #+#    #+#             */
/*   Updated: 2025/10/27 16:05:34 by ktintim          ###   ########.fr       */
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
	vit start = _data.begin();
	vit end = _data.end();
	while (start != end)
	{
		std::cout << *start << " ";
		start++;
	}
	std::cout << std::endl;
}

void PmergeVector::exchangePair(vit first, vit sec)
{
	if (*first <= *sec)
		return ;
	vit newPos = sec + 1;

	std::rotate(first - _order + 1, sec - _order + 1, newPos);
}

void PmergeVector::merge()
{
	if ((_order * 2) > _data.size())
		return ;
	
	vit first = _data.begin() + (_order - 1);
	vit sec = _data.begin() + (_order * 2 - 1);

	while (sec <= _data.end())
	{
		exchangePair(first, sec);
		
		first += _order * 2;
		sec += _order * 2;
	}

	_order *= 2;
	merge();
}

void PmergeVector::binarySearch(vi &main, vi &pend, vit sbegin, vit send, vit start, vit end)
{
	int range = std::distance(start, end + 1) / _order;
	vit middle = end - 1;

	if (range == 3)
		middle -= _order;
	if (range <= 1)
		middle = end - (_order * range);
	else
		middle = end - ((range / 2) * _order);

	while (true)
	{
		if (range <= 2)
		{
			if (range <= 1)
			{
				// insert 1 after middle or end
			}
			else
			{
				// insert in right or left of middle
			}
		}
		else if (range == 2)
		{
			if (*send <= *middle)
			{
				// insert at begin
			}
			else
			{
				if (*send <= *end)
				{
					// insert at mid+1
				}
				else
				{
					// insert at end+1
				}
			}
		}
		
		if (*send <= *middle)
		{
			if (std::distance(start, end + 1) / _order > 2)
				end = middle - _order;
			else
				end = middle;
		}
		else
			start = middle + 1;
		
		if (range == 3)
			middle -= _order;
		if (range <= 1)
			middle = end - (_order * range);
		else
			middle = end - ((range / 2) * _order);
	}
}

void PmergeVector::insertion()
{
	vi main;
	vi pend;
	vi trash;
	
	for (size_t i = 0; i < _order; i++)
		main.push_back(_data[i]);
	for (size_t i = _order; i < _order * 2; i++)
		main.push_back(_data[i]);

	size_t nbPair = _data.size() / _order;
	size_t idxPair = 2;
	size_t idxTrash = 0;

	while (idxPair < nbPair)
	{
		if ((idxPair + 1) % 2 == 0)
		{
			for (size_t i = idxPair * _order; i < (idxPair + 1) * _order; i++)
				main.push_back(_data[i]);
		}
		else
		{
			for (size_t i = idxPair * _order; i < (idxPair + 1) * _order; i++)
				pend.push_back(_data[i]);
		}
		idxPair++;

		if (nbPair == idxPair)
		{
			idxTrash = idxPair * _order;
			for (; idxTrash < _data.size(); idxTrash++)
				trash.push_back(_data[idxTrash]);
		}
	}
	_data.clear();
	
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
