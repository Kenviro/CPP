/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilian <kilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 15:36:27 by ktintim-          #+#    #+#             */
/*   Updated: 2025/04/12 13:11:46 by kilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Calcule le déterminant (produit vectoriel scalaire en 2D) entre les vecteurs (p3 -> p1) et (p3 -> p2)
// Sert à déterminer la position relative du point p1 par rapport au segment formé par p2 et p3
// Le résultat permet de savoir si p1 est à gauche, à droite ou aligné avec le segment p2-p3

float sign(Point const p1, Point const p2, Point const p3)
{
	return (p1.getX().toFloat() - p3.getX().toFloat()) * (p2.getY().toFloat() - p3.getY().toFloat()) 
	     - (p2.getX().toFloat() - p3.getX().toFloat()) * (p1.getY().toFloat() - p3.getY().toFloat());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float d1 = sign(point, a, b);  // Signe entre le point et le bord AB
    float d2 = sign(point, b, c);  // Signe entre le point et le bord BC
    float d3 = sign(point, c, a);  // Signe entre le point et le bord CA

    // Si l'un des signes est 0, cela signifie que le point est sur un bord
    if (d1 == 0 || d2 == 0 || d3 == 0)
        return false;  // Point sur le bord => outside

    bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    // Le point est à l'intérieur si tous les signes sont soit positifs soit négatifs
    return !(has_neg && has_pos); // true si tous les signes sont du même côté
}
