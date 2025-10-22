/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 14:11:06 by ktintim           #+#    #+#             */
/*   Updated: 2025/10/22 11:54:53 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iterator>
# include <stack>
# include <cstddef>

template<typename T>
class MutantStack {

	private:

		std::stack<T> _s;
		T*	_first;

	public:

		MutantStack();
		MutantStack(const MutantStack& cpy);
		MutantStack& operator=(const MutantStack& src);
		~MutantStack();

		// element access
		const T& top() const;
		
		// capacity
		bool empty() const;
		int size() const;
		
		// modifiers
		void push(const T value);
		void pop();

		
		class Iterator {
			
			public:
			typedef std::bidirectional_iterator_tag iterator_category;
			typedef std::ptrdiff_t difference_type;
			typedef T value_type;
			typedef T* pointer;
			typedef T& reference;
			
			Iterator(T* ptr);
			Iterator& operator=(const Iterator& src);
			
			reference operator*();
			pointer operator->();
			Iterator& operator++();
			Iterator operator++(int);
			Iterator& operator--();
			Iterator operator--(int);
			bool operator==(const Iterator& other) const;
			bool operator!=(const Iterator& other) const;
			
			private:
			pointer _ptr;
			
		};
		
		Iterator begin();
		Iterator end();
		
};

#endif