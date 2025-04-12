/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:04:20 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/12 13:22:02 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// pour visualiser le tout https://www.geogebra.org/graphing

int main() {
	Point a(0, 0);
	Point b(10, 0);
	Point c(5, 10);
	

    Point inside(5.0f, 5.0f);
    Point outside(10.0f, 10.0f);
    Point edge(5.0f, 0.0f);
    Point vertex(0.0f, 0.0f);

	std::cout << "Triangle points:" << std::endl;
	std::cout << "A(" << a.getX().toFloat() << ", " << a.getY().toFloat() << ")" << std::endl;
	std::cout << "B(" << b.getX().toFloat() << ", " << b.getY().toFloat() << ")" << std::endl;
	std::cout << "C(" << c.getX().toFloat() << ", " << c.getY().toFloat() << ")" << std::endl;
	
	{
		std::cout << std::endl;
		std::cout << "Test Point inside(" << inside.getX().toFloat() << ", " << inside.getY().toFloat() << ")" << std::endl;

		if (bsp(a, b, c, inside))
			std::cout << "=> Point inside is inside the triangle!" << std::endl;
		else
			std::cout << "=> Point inside is outside the triangle." << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "Test Point outside(" << outside.getX().toFloat() << ", " << outside.getY().toFloat() << ")" << std::endl;

		if (bsp(a, b, c, outside))
			std::cout << "=> Point outside is inside the triangle!" << std::endl;
		else
			std::cout << "=> Point outside is outside the triangle." << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "Test Point edge(" << edge.getX().toFloat() << ", " << edge.getY().toFloat() << ")" << std::endl;

		if (bsp(a, b, c, edge))
			std::cout << "=> Point edge is inside the triangle!" << std::endl;
		else
			std::cout << "=> Point edge is outside the triangle." << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "Test Point vertex(" << vertex.getX().toFloat() << ", " << vertex.getY().toFloat() << ")" << std::endl;

		if (bsp(a, b, c, vertex))
			std::cout << "=> Point vertex is inside the triangle!" << std::endl;
		else
			std::cout << "=> Point vertex is outside the triangle." << std::endl;
	}
	return 0;
}
