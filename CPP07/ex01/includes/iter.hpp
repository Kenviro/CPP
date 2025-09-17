/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim <ktintim-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 20:57:12 by kilian            #+#    #+#             */
/*   Updated: 2025/09/17 10:56:00 by ktintim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template <typename T>
void incr(T &p)
{
	p++;
}

template <typename T>
void print(const T &p)
{
	std::cout << p << std::endl;
}

template <typename T>
void print(T &p)
{
	std::cout << p << std::endl;
}

template <typename T>
void iter(T* array, int length, void (*f)(T &n))
{
	for (int i = 0; i < length; i++)
	{
		f(array[i]);
	}
}

template <typename T>
void iter(const T* array, int length, void (*f)(const T &n))
{
	for (int i = 0; i < length; i++)
	{
		f(array[i]);
	}
}
