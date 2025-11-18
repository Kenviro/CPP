/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:16:02 by ktintim           #+#    #+#             */
/*   Updated: 2025/11/18 09:36:14 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <algorithm>
# include <time.h>
# include <vector>
# include <deque>
# include <exception>
# include <stdexcept>
# include <sstream>
# include <iostream>

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

# define vit std::vector<int>::iterator
# define vi std::vector<int>

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
		std::vector<long> jacobsthal(size_t size);
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

# define dit std::deque<int>::iterator
# define di std::deque<int>

class PmergeDeque {

	private:

		di _data;
		size_t	_order;
		clock_t _start;
		PmergeDeque();
		void printDeq();
		void printDeq(dit begin, dit end);
		void exchangePair(int i, int j);
		void binarySort(di &main, di& pend, di &trash);
		void standardBinary(di &main, di& pend);
		void jacobsthalBinary(di &main, di &pend, std::deque<long>::iterator itj);
		void binarySearch(di &main, dit sbegin, dit send, dit start, dit end);
		std::deque<long> jacobsthal(size_t size);
		void merge();
		void insertion();
		void displayInfo();

	public:

		PmergeDeque(char *input);
		PmergeDeque(const PmergeDeque& cpy);
		PmergeDeque& operator=(const PmergeDeque& src);
		~PmergeDeque();

		void sort();

};

#endif