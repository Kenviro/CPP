/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:16:02 by ktintim           #+#    #+#             */
/*   Updated: 2025/10/28 13:03:11 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <algorithm>
# include <time.h>
# include <vector>
# include <exception>
# include <stdexcept>
# include <sstream>
# include <iostream>

# define vit std::vector<int>::iterator
# define vi std::vector<int>

template <class T>
bool isSorted(T begin, T end)
{
	begin++;
	while (begin != end)
	{
		if (*(begin - 1) > *begin)
			return false;
		begin++;
	}
	return true;
}

std::vector<long> jacobsthal(size_t size);

class PmergeVector {

	private:

		vi _data;
		size_t	_order;
		clock_t _start;
		PmergeVector();
		void printVec();
		void printVec(vit begin, vit end);
		void exchangePair(int i, int j);
		void binarySort(vi &main, vi& pend, vi &trash);
		void standardBinary(vi &main, vi& pend);
		void jacobsthalBinary(vi &main, vi &pend, std::vector<long>::iterator itj);
		void binarySearch(vi &main, vit sbegin, vit send, vit start, vit end);
		void merge();
		void insertion();
		void displayInfo();

	public:

		PmergeVector(char *input);
		PmergeVector(const PmergeVector& cpy);
		PmergeVector& operator=(const PmergeVector& src);
		~PmergeVector();

		void sort();

};

#endif