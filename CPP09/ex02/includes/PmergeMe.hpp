/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:16:02 by ktintim           #+#    #+#             */
/*   Updated: 2025/10/27 14:09:30 by ktintim          ###   ########.fr       */
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

class PmergeVector {

	private:

		vi _data;
		size_t	_order;
		clock_t _start;
		PmergeVector();
		void printVec();
		void exchangePair(vit first, vit sec);
		void binarySearch(vi &main, vi &pend, vit sbegin, vit send, vit start, vit end);
		void merge();
		void insertion();

	public:

		PmergeVector(char *input);
		PmergeVector(const PmergeVector& cpy);
		PmergeVector& operator=(const PmergeVector& src);
		~PmergeVector();

		void sort();

};

#endif