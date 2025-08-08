/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 14:07:41 by ktintim           #+#    #+#             */
/*   Updated: 2025/08/08 18:40:58 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include "Array.hpp"

template <typename T>
Array<T>::Array() : _size(0)
{
	_array = nullptr;
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	_array = new T[n];
	for (unsigned int i = 0; i < n; i++)
	{
		_array[i] = T();
	}
}

template <typename T>
Array<T>::Array(const Array<T>& cpy) : _size(cpy.size())
{
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
	{
		_array[i] = cpy[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& src)
{
    if (this != &src)
	{
        delete[] _array;
        _size = src.size();
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
		{
            _array[i] = src[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
T& Array<T>::operator[](int idx)
{
	if (idx >= (int)_size)
		throw std::out_of_range("index out of bounds");
	return _array[idx];
}

template <typename T>
T Array<T>::operator[](int idx) const
{
	if (idx >= (int)_size)
		throw std::out_of_range("index out of bounds");
	return _array[idx];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}
