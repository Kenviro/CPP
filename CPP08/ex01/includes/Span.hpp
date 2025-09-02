/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:31:39 by ktintim           #+#    #+#             */
/*   Updated: 2025/09/02 21:20:24 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>

class Span {

	private:

		Span();
		const unsigned int _size;
		std::vector<int> _array;

	public:

		Span(unsigned int n);
		Span(const Span& cpy);
		Span& operator=(const Span& src);
		~Span();
		
		void addNumber(int n);
		void addRangeNumber(int first, int last);
		int shortestSpan();
		int longestSpan();

		int	getIndex(int i) const;
		int	getMaxSize() const;

		class ExceedMaxSizeException : public std::exception {
		public :
			const char* what() const throw();
		};
		
};

std::ostream &operator<<(std::ostream& stream, const Span& s);

#endif