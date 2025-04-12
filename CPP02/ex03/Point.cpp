/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:53:28 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/12 12:40:50 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float srcX, const float srcY) : x(srcX), y(srcY) {}

Point::Point(const Point& src) : x(src.x), y(src.y) {}

Point::~Point() {}

Fixed Point::getX() const
{
	return x;
}

Fixed Point::getY() const
{
	return y;
}