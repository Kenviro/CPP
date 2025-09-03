/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 14:24:10 by ktintim           #+#    #+#             */
/*   Updated: 2025/09/03 17:13:50 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{
	
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& cpy)
{
	_s = cpy._s;
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T>& src)
{
	if (this != &src)
	{
		_s = src._s;
	}
	return *this;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
	
}

template<typename T>
const T&	MutantStack<T>::top() const
{
	return _s.top();
}

template<typename T>
bool MutantStack<T>::empty() const
{
	return _s.empty();
}

template<typename T>
int MutantStack<T>::size() const
{
	return _s.size();
}

template<typename T>
void	MutantStack<T>::push(const T value)
{
	_s.push(value);
	if (_s.size() == 1)
		_first = &(_s.top());
}

template<typename T>
void	MutantStack<T>::pop()
{
	_s.pop();
	if (_s.size() == 0)
		_first = NULL;
}

template<typename T>
typename MutantStack<T>::Iterator MutantStack<T>::begin()
{
	return Iterator(_first);
}

template<typename T>
typename MutantStack<T>::Iterator MutantStack<T>::end()
{
	return Iterator(_first + _s.size());
}

// Iterator declaraction

template<typename T>
MutantStack<T>::Iterator::Iterator(T* ptr) : _ptr(ptr)
{
	
}	

template<typename T>
typename MutantStack<T>::Iterator& MutantStack<T>::Iterator::operator=(const Iterator& src)
{
	_ptr = src._ptr;
}

template<typename T>
T& MutantStack<T>::Iterator::operator*()
{
	return *_ptr;
}

template<typename T>
T* MutantStack<T>::Iterator::operator->()
{
	return _ptr;
}

template<typename T>
typename MutantStack<T>::Iterator& MutantStack<T>::Iterator::operator++()
{
	_ptr++;
	return *this;
}

template<typename T>
typename MutantStack<T>::Iterator MutantStack<T>::Iterator::operator++(int)
{
	Iterator tmp = *this;
	(*this)++;
	return tmp;
}

template<typename T>
typename MutantStack<T>::Iterator& MutantStack<T>::Iterator::operator--()
{
	_ptr--;
	return *this;
}

template<typename T>
typename MutantStack<T>::Iterator MutantStack<T>::Iterator::operator--(int)
{
	Iterator tmp = *this;
	(*this)--;
	return tmp;
}

template <typename T>
bool MutantStack<T>::Iterator::operator==(const Iterator& other) const
{
	return (*this)._ptr == other._ptr;
}

template <typename T>
bool MutantStack<T>::Iterator::operator!=(const Iterator& other) const
{
	return (*this)._ptr != other._ptr;
}
