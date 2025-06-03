/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:10:06 by tgoudman          #+#    #+#             */
/*   Updated: 2025/05/01 16:22:30 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	area(Point const a, Point const b, Point const c)
{
	float	area;
	float	xa;
	float	xb;
	float	xc;

	//Area A = [ xa(yb – yc) + xb(yc – ya) + xc(ya-yb)]/2
	xa = a.getX() * (b.getY() - c.getY());
	xb = b.getX() * (c.getY() - a.getY());
	xc = c.getX() * (a.getY() - b.getY());
	area = (xa + xb + xc) / 2;
	if (area >= 0)
		return (area);
	else
		return (-area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	d;
	float	d1;
	float	d2;
	float	d3;

	d = area(a, b, c);
	d1 = area(point, a, b);
	d2 = area(point, b, c);
	d3 = area(point, a, c);
	// std::cout << d << std::endl;
	// std::cout << d1 << std::endl;
	// std::cout << d2 << std::endl;
	// std::cout << d3 << std::endl;

	std::cout << d1 + d2 + d3 << " -- " << d << std::endl;
	if (d1 + d2 + d3 == d)
		return (true);
	return (false);
}