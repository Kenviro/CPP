/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:21:08 by kilian            #+#    #+#             */
/*   Updated: 2025/08/03 20:02:15 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template <typename T>
T max(T a, T b)
{
	if (a == b)
		return b;
	if (a < b)
		return b;
	else
		return a;
}

template <typename T>
T min(T a, T b)
{
	if (a == b)
		return b;
	if (a > b)
		return b;
	else
		return a;
}

template <typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
