/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:29:49 by ktintim           #+#    #+#             */
/*   Updated: 2025/10/29 20:31:29 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"



std::vector<long> jacobsthal(size_t size)
{
	std::vector<long> j;
	size_t range = 0;

	j.push_back(0);
	j.push_back(1);
	while (true)
	{
		size_t next = j[j.size() - 1] + 2 * j[j.size() - 2];
		if (range >= size)
			break ;
		range += (size_t)(j[j.size() - 1] - j[j.size() - 2]); 
		j.push_back(next);
	}
	return (j);
}


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

void PmergeVector::printVec(vit begin, vit end)
{
	while (begin != end)
	{
		std::cout << *begin << " ; ";
		begin++;
	}
	std::cout << std::endl;
}

void PmergeVector::exchangePair(int i, int j)
{
	int len = _order - 1;
	int swap = 0;

	while (len >= 0)
	{
		swap = _data[i];
		_data[i] = _data[j];
		_data[j] = swap;

		i--;
		j--;
		len--;
	}
}

void PmergeVector::merge()
{
	if ((size_t)_order * 2 > _data.size())
		return ;
		
	int i = _order - 1;
	int j = _order * 2 - 1;
	int size = _data.size();

	while (i < size && j < size)
	{
		if (_data[j] < _data[i])
			exchangePair(i, j);
		i = j + _order;
		j = i + _order;
	}

	_order *= 2;
	merge();
	
	_order /= 2;
	insertion();
}

void PmergeVector::binarySearch(vi &main, vit sbegin, vit send, vit start, vit end)
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
				if (*send <= *end)
					main.insert(start, sbegin, send + 1);
				else
					main.insert(end + 1, sbegin, send + 1);
			}
			else if (range == 2)
			{
				if (*send <= *middle)
					main.insert(start, sbegin, send + 1);
				else
				{
					if (*send <= *end)
						main.insert(middle + 1, sbegin, send + 1);
					else
						main.insert(end + 1, sbegin, send + 1);
				}
			}
			break ;
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
		
		range = std::distance(start, end + 1) / _order;
		if (range == 3)
			middle -= _order;
		if (range <= 1)
			middle = end - (_order * range);
		else
			middle = end - ((range / 2) * _order);
	}
}

void PmergeVector::standardBinary(vi &main, vi& pend)
{
	vit start = pend.end() - _order;
	vit end = pend.end() - 1;

	while (!pend.empty())
	{
		binarySearch(main, start, end, main.begin(), main.end() - 1);
		if (start != pend.begin())
		{
			start -= _order;
			end -= _order;
		}
		for (size_t i = _order; i > 0; i--)
			pend.pop_back();
	}
}

void PmergeVector::jacobsthalBinary(vi &main, vi &pend, std::vector<long>::iterator itj)
{
	while (!pend.empty())
	{
		size_t nbrInsert = *itj - (*(itj - 1));
		if (nbrInsert > (pend.size() / _order))
		{
			standardBinary(main, pend);
			break ;
		}

		while (nbrInsert > 0)
		{
			int jRange = (*itj + (*(itj - 1))) - 1;
			vit sbegin = pend.begin() + (_order * nbrInsert) - _order;
			vit send = pend.begin() + (_order * nbrInsert) - 1;
			vit start = main.begin();
			int range = (main.size() / _order) - jRange;
			vit end = main.end() - (range * _order) - 1;
			binarySearch(main, sbegin, send, start, end);
			nbrInsert--;
			pend.erase(sbegin, send + 1);
		}
		itj++;
	}
}


void PmergeVector::binarySort(vi &main, vi& pend, vi &trash)
{
	std::vector<long> j = jacobsthal(pend.size() / _order);
	
	std::vector<long>::iterator ite = std::find(j.begin(), j.end(), 3);
	if (ite == j.end())
		standardBinary(main, pend);
	else
		jacobsthalBinary(main, pend, ite);

	if (!trash.empty())
	{
		for (vit ite = trash.begin(); ite != trash.end(); ite++)
			main.push_back(*ite);
		trash.clear();
	}
	
}

void PmergeVector::insertion()
{
	if (_order == 0)
		return ;
	
	vi main;
	vi pend;
	vi trash;
	
	if (_order == _data.size() / 2)
		_order /= 2;
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
		
		if (idxPair >= nbPair)
		{
			idxTrash = idxPair * _order;
			for (; idxTrash < _data.size(); idxTrash++)
				trash.push_back(_data[idxTrash]);
		}
	}
	_data.clear();
	
	binarySort(main, pend, trash);

	_data = main;

	_order /= 2;
	insertion();
}

void PmergeVector::displayInfo()
{
	clock_t end = clock() - _start;
	std::cout << "After : " << std::boolalpha;
	printVec();
	std::cout << "Is sorted : " << isSorted(_data.begin(), _data.end()) << std::endl;
	std::cout << "Time to process a range of " << _data.size() 
	<< " element with std::vector : " << (float)end / CLOCKS_PER_SEC << std::endl << std::endl;
}

void PmergeVector::sort()
{
	std::cout << "Before : ";
	printVec();
	merge();
	displayInfo();
}
