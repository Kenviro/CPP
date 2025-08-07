/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 20:57:12 by kilian            #+#    #+#             */
/*   Updated: 2025/08/03 23:03:10 by kilian           ###   ########.fr       */
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
