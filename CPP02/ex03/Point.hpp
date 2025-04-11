/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:37:46 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/11 15:35:04 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
	
	private:
		const Fixed x;
		const Fixed y;

	public:
		
		Point();
		Point(const float srcX, const float srcY);
		Point(const Point& src);
		Point& operator=(const Point&) = delete;
		~Point();

		bool bsp(Point const a, Point const b, Point const c, Point const point);

};

#endif