/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:16:02 by ktintim           #+#    #+#             */
/*   Updated: 2025/10/17 15:28:51 by ktintim          ###   ########.fr       */
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

class PmergeVector {

	private:

		std::vector<int> _data;
		size_t	_order;
		clock_t _start;
		PmergeVector();
		void printVec();
		void exchangePair(std::vector<int>::iterator first, std::vector<int>::iterator sec);

	public:

		PmergeVector(char *input);
		PmergeVector(const PmergeVector& cpy);
		PmergeVector& operator=(const PmergeVector& src);
		~PmergeVector();

		void sort();

};

#endif