/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:53:28 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/11 15:19:39 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float srcX, const float srcY) : x(srcX), y(srcY) {}

Point::Point(const Point& src) : x(src.x), y(src.y) {}

Point::~Point() {}