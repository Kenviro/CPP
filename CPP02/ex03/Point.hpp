/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:37:46 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/12 12:55:30 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
	
	private:
		const Fixed x;
		const Fixed y;
		Point& operator=(const Point&);

	public:
		
		Point();
		Point(const float srcX, const float srcY);
		Point(const Point& src);
		~Point();
		Fixed getX() const;
		Fixed getY() const;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif