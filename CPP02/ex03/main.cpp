/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:59:18 by tgoudman          #+#    #+#             */
/*   Updated: 2025/05/01 17:57:25 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
	Point	pointA(-3.4584, -8.452);
	Point	pointB(12, 18);
	Point	pointC(26, 8);
	Point	point(6.94, 9.84);

	if (bsp(pointA, pointB, pointC, point))
		std::cout << "Is inside the triangle" << std::endl;
	else
		std::cout << "Not inside" << std::endl;
}
